/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:13:17 by karabaci          #+#    #+#             */
/*   Updated: 2022/02/20 23:13:20 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	s;

	s = ft_strlen(str);
	while (s >= 0)
	{
		if (str[s] == (char)c)
			return ((char *)(str + s));
		s--;
	}
	return (0);
}
