/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeshaye <pdeshaye@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 06:21:23 by pdeshaye          #+#    #+#             */
/*   Updated: 2021/11/04 06:21:23 by pdeshaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int     index;
    
    index = 0;
    if (!s)
        return ;
    while (s[index] != '\0')
    {
        (*f)(index, s + index);
        index++;
    }
}