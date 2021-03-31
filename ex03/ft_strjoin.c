/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 13:11:17 by fboumell          #+#    #+#             */
/*   Updated: 2021/03/31 11:49:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	if (!(str = malloc(sizeof(char*) * (j + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(str + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
			ft_strcpy(str + j, sep);
		if (i++ < size - 1)
			j += ft_strlen(sep);
	}
	str[j] = '\0';
	return (str);
}
