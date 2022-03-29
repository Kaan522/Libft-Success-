/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:00:07 by karabaci          #+#    #+#             */
/*   Updated: 2022/02/20 23:00:15 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (!lst)
	{
		return (NULL);
	}
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
