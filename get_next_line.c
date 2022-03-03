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

char    *ft_read_all(int fd, char *s_remain)
{
    char *buff;
    int read_bytes;

    buff = malloc((*buff) * (BUFFER_SIZE + 1));
    if (!buff)
        return (NULL);
    read_bytes = 1;
    while(!ft_strchr(s_remain, '\n') && read_bytes != 0)
    {
        read_bytes = read(fd, buff, BUFFER_SIZE);
        if (read_bytes = -1)
        {
            free(buff);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        s_remain = strjoin(s_remain, buff);
    }
    free(buff);
    return (s_remain);
}

char    *ft_get_line(s_remain)
{
    int i;
    char    *str;

    i = 0;
    while (s_remain[i] && s_remain != '\n')
        i++;
    str = malloc(sizeof(*str) * (i + 2));
    if (!str)
        return (NULL);
    i = 0;
    while (s_remain[i] && s_remain[i] != '\n')
    {
        str[i] = s_remain[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char    *ft_remainder(char *s_remain)
{
    int i;
    int j;
    char    *str;

    i = 0;
    while (s_remain[i] && s_remain =! '\n')
        i++;
    str = malloc(sizeof(*str) * (ft_strlen(s_remain) - i + 1))
    if (!str)
    {
        free(str);
        return (NULL);
    }
    j = -1;
    while (s_remain[i])
        str[++j] = s_remain[i++]
    str[j] = '\0';
    free(s_remain);
    return (str);
}

char *get_next_line(int fd)
{
    char        *line;
    static char *s_remain;

    if (fd < 0 || BUFFER_SIZE < 1)
        return (0);
    s_remain = ft_read_all(fd, s_remain);
    if (!s_remain)
        return (NULL);
    line = ft_get_line(s_remain);
    s_remain = ft_remainder(s_remain);
    return (line);
}

