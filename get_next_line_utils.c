/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:39:53 by jting             #+#    #+#             */
/*   Updated: 2022/02/25 12:54:50 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
}   return (i);

char    *ft_strjoin(char *s1, char *s2)
{
    int i;
    int j;
    char    *dst;

    if(!s1)
    {
        s1 = malloc(sizeof(*s1) * 1);
        s1[0] = '\0';
    }
    dst = malloc(sizeof(*dst) * (ft_strlen(s1) + ft_strlen(s2) + 1)
    if (!dst)
        return (NULL);
    i = -1;
    while(s1[++i])
        dst[i] = s1[i];
    j = -1;
    while (s2[++j])
        dst[i + j] = s2[j]
    dst[i + j] = '\0';
    free(s2);
    return (dst);
}

char    *ft_strchr(char *s, int c)
{
    int i;

    if (!s || c == '\0')
        return (NULL);
    i = 0;
    while (s[i] && s[i] != c)
        i++;
    if (s[i] == c)
        return ((char *)(s + i));
    return (0);
}