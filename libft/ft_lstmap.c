/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaliba <esaliba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 00:02:13 by esaliba           #+#    #+#             */
/*   Updated: 2026/11/13 13:01:51 by esaliba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	hack;

	if (! f || ! del)
		return (NULL);
	hack.next = NULL;
	p = &hack;
	while (lst)
	{
		p->next = malloc(sizeof(t_list));
		if (p->next == NULL)
		{
			ft_lstclear(&hack.next, del);
			return (NULL);
		}
		p->next->content = f(lst->content);
		p->next->next = NULL;
		p = p->next;
		lst = lst->next;
	}
	return (hack.next);
}
