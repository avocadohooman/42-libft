/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:29:33 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/23 18:18:23 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
