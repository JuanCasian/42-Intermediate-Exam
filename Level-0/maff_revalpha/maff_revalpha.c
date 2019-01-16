/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:21:38 by jcasian           #+#    #+#             */
/*   Updated: 2019/01/15 19:28:53 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char c;
	
	c = 'z';
	while (c >= 'a')
	{
		if (c % 2 == 0)
			ft_putchar(c);
		else
			ft_putchar(c - 32);
		c--;
	}
	ft_putchar('\n');
}
