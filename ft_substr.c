/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeshaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 03:29:57 by pdeshaye          #+#    #+#             */
/*   Updated: 2021/11/05 12:27:02 by pdeshaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	index;
	size_t	index_result;

	if (!s)
		return (NULL);
	index_result = 0;
	index = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		if (index >= start && index_result < len)
		{
			result[index_result] = s[index];
			index_result++;
		}
		index++;
	}
	result[index_result] = '\0';
	return (result);
}
