/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeshaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:35:58 by pdeshaye          #+#    #+#             */
/*   Updated: 2021/11/02 16:35:58 by pdeshaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strln(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = ft_strln(dest);
	if (size < 1)
		return ((int) ft_strln(src));
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	if (size >= l)
		dest[i] = '\0';
	if (size < ft_strln(dest))
		return ((int)(ft_strln(src) + size));
	else
		return ((int)(ft_strln(src) + l));
}
