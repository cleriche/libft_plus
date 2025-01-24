/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:54:33 by cleriche          #+#    #+#             */
/*   Updated: 2024/11/25 11:54:38 by cleriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*tamp;

	if (!f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		tamp = ft_lstnew((*f)(lst->content));
		if (tamp)
		{
			ft_lstadd_back(&result, tamp);
			lst = lst->next;
		}
		else
			ft_lstclear(&result, del);
	}
	return (result);
}
