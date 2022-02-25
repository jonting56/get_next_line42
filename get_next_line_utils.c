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

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strjoin(char *s1, char *s2)
{
	char *str
	int	i;
	int	j;

	str = malloc(sizeof(char) * (ft_strlen(s1) * ft_strlen(s2));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;

	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
		str[i++] = s2[c++];
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (*(s + i));
}
