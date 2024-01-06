/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:50:17 by hbettal           #+#    #+#             */
/*   Updated: 2023/11/19 18:53:20 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*swap;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		swap = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = swap;
	}
}
