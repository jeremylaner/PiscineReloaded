/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaner <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:23:43 by jlaner            #+#    #+#             */
/*   Updated: 2016/11/03 17:04:21 by jlaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		size_src;

	i = 0;
	size_src = 0;
	while (src[size_src])
		size_src++;
	dest = (char*)malloc(sizeof(*dest) * (size_src));
	if (dest == NULL)
		return (NULL);
	while (i < size_src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size_src] = '\0';
	return (dest);
}
