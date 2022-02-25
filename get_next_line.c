/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:20:53 by jting             #+#    #+#             */
/*   Updated: 2022/02/25 16:33:30 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_utils.c"
#include "get_next_line.h"

char	*ft_read_save(int fd, char *save)
{
	char *buff;
	int	read_bytes;

	buff = malloc(sizeof(char) * (BUFFERSIZE + 1));
	if (!buff)
		return (NUL);
	read_bytes = 1;
	while (!ft_strchr(save, '\n') && read_bytes != 0)
	{
		if (read_bytes == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		save = ft_strjoin(save, buff);
	}
	free (buff);
	return (save);
}

char	*ft_get_line(char *save)
{
	int		i;
	int		c;
	char	*s;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i])
	{
		free (save);
		return (NULL);
	}
	s = malloc(sizeof(char) * (i + 1));


char	*get_next_line(int fd)
{
	char	*save;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	save = ft_read_save(fd, save);
	if (!save)
		return (NULL);
	line = 
