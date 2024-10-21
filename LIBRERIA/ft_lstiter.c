/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:02:54 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/16 18:10:30 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))

{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);

		tmp = tmp->next;
	}
}