/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeshaye <pdeshaye@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 06:36:29 by pdeshaye          #+#    #+#             */
/*   Updated: 2021/11/04 06:36:29 by pdeshaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int index;

    index = 0;
    if (!s)
        return ;
    while (s[index] != '\0')
    {
        write(fd, s + index, 1);
        index++;
    }
    write(fd, "\n", 1);
}
