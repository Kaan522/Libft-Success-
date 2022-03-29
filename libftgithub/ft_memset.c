/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:02:47 by karabaci          #+#    #+#             */
/*   Updated: 2022/02/20 23:02:54 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int val, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n-- > 0)
			*x++ = val;
	return (s);
}
