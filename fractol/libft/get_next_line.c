/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 07:41:28 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/05 07:41:30 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_up_buf(char **buf)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(*buf);
	if (!(tmp = ft_strnew(len)))
		return (1);
	ft_strncpy(tmp, *buf, len);
	free(*buf);
	if (!(*buf = ft_strnew(len + BUFF_SIZE)))
		return (1);
	ft_strncpy(*buf, tmp, len);
	free(tmp);
	return (0);
}

int		ft_line(char **buf, char **line)
{
	size_t	i;

	if (ft_strchr(*buf, '\n'))
	{
		i = ft_strlen(*buf) - ft_strlen(ft_strchr(*buf, '\n'));
		*line = ft_strnew(i);
		ft_strncpy(*line, *buf, i);
		*buf = ft_strsub(*buf, i + 1, ft_strlen(ft_strchr(*buf, '\n')));
		return (1);
	}
	else
	{
		if (ft_strlen(*buf) == 0)
		{
			*line = ft_strdup("");
			*buf = ft_strdup("");
			return (0);
		}
		i = ft_strlen(*buf);
		*line = ft_strnew(i);
		ft_strncpy(*line, *buf, i);
		*buf = ft_strdup("");
		return (1);
	}
}

t_gnl	*ft_list(t_gnl *list, int fd)
{
	t_gnl *buf_list;
	t_gnl *tmp;

	if (list == NULL)
	{
		list = (t_gnl*)malloc(sizeof(*list));
		list->fd = fd;
		list->next = NULL;
		list->buf = ft_strnew(0);
		return (list);
	}
	buf_list = list;
	while (buf_list)
	{
		if (buf_list->fd == fd)
			return (buf_list);
		tmp = buf_list;
		buf_list = buf_list->next;
	}
	buf_list = (t_gnl*)malloc(sizeof(*buf_list));
	buf_list->fd = fd;
	buf_list->next = NULL;
	buf_list->buf = ft_strnew(0);
	tmp->next = buf_list;
	return (buf_list);
}

int		get_next_line(const int fd, char **line)
{
	int				count;
	static t_gnl	*list = NULL;
	t_gnl			*buf;
	char			*tmp;

	if (fd < 0 || !(tmp = ft_memalloc(BUFF_SIZE)))
		return (-1);
	if ((count = read(fd, tmp, 0)) < 0)
		return (-1);
	if (!(list))
		list = ft_list(list, fd);
	buf = ft_list(list, fd);
	while ((count = read(fd, tmp, BUFF_SIZE) > 0))
	{
		if (ft_up_buf(&buf->buf))
			return (-1);
		ft_strncat(buf->buf, tmp, BUFF_SIZE);
		ft_bzero(tmp, BUFF_SIZE);
		if (ft_strchr(buf->buf, '\n'))
			break ;
	}
	ft_strdel(&tmp);
	return (ft_line(&buf->buf, line));
}
