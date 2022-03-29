/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:09:39 by karabaci          #+#    #+#             */
/*   Updated: 2022/02/20 23:09:44 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		end_s1;

	if (!s1 || !s2)
		return (NULL);
	string = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	end_s1 = i;
	i = 0;
	while (s2[i] != '\0')
	{	
		string[end_s1 + i] = s2[i];
		i++;
	}
	string[end_s1 + i] = '\0';
	return (string);
}
