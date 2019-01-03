/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:40:33 by kemethen          #+#    #+#             */
/*   Updated: 2018/11/19 19:41:27 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **alst, t_list *new)
{
	t_list	*iter;

	if (alst == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	iter = *alst;
	while (iter->next != NULL)
		iter = iter->next;
	iter->next = new;
}
