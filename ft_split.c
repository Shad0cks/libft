/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeshaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:11:49 by pdeshaye          #+#    #+#             */
/*   Updated: 2021/11/03 16:11:50 by pdeshaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *str, char charset)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != charset && str[i + 1] == charset)
			result++;
		i++;
	}
	return (result);
}

char	**ft_split(char const *string, char charset)
{
	size_t		len;
	size_t		index;
	const char	*start;
	char		**split;

	index = 0;
	if (!string)
        return (NULL);
	split = (char **) malloc(((count_word(string, charset)) + 1) * sizeof(*split));
	if (split == NULL)
		return (NULL);
	while (*string != '\0')
	{
		while (*string && *string == charset)
			string++;
		start = string;
		len = 0;
		while (*string && *string != charset)
		{
			string++;
			len++;
		}
		if (*(string - 1) != charset)
			split[index++] = ft_substr(start, 0, len);
	}
	split[index] = 0;
	return (split);
}

