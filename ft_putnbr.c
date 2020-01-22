/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuokka <vkuokka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:44:52 by vkuokka           #+#    #+#             */
/*   Updated: 2019/10/26 12:21:32 by vkuokka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long n2;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar('-');
		n2 = n2 * -1;
	}
	if (n2 < 10)
		ft_putchar(n2 + '0');
	else
	{
		ft_putnbr(n2 / 10);
		ft_putnbr(n2 % 10);
	}
}
