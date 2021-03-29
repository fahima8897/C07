/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:11:17 by fboumell          #+#    #+#             */
/*   Updated: 2021/03/28 17:02:40 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_count(int size, char **strs, char *sep)
{
	int i;
	int sc;

	i = 0;
	sc = 0;
	while (i < size)
	{
		sc = sc + ft_strlen(strs[i]);
		i++;
	}
	sc = sc + ft_strlen(sep) * size - 1;
	return (sc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sc;
	int		i;
	char	*dest;

	sc = ft_count(size, strs, sep);
	i = 0;
	if (size <= 0)
	{
		if (!(dest = malloc(sizeof(char) * 1)))
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * (sc + 1))))
		return (NULL);
	ft_strcpy(dest, strs[i++]);
	while (i < size)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i++]);
	}
	ft_strcat(dest, strs[i]);
	return (dest);
}
