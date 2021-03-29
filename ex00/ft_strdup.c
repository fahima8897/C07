/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 09:03:42 by fboumell          #+#    #+#             */
/*   Updated: 2021/03/28 09:21:37 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = 0;
	while (src[len])
		len++;
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	len = 0;
	while (src[len])
	{
		cpy[len] = src[len];
		len++;
	}
	cpy[len] = '\0';
	return (cpy);
}
