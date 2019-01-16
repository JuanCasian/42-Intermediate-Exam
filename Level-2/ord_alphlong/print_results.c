/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:37:16 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 11:40:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

void print_results(char ***result)
{
	int i;
	int j;

	if (result)
	{
		i = -1;
		while (result[++i])
		{
			j = -1;
			while(result[i][++j])
			{
				ft_putstr(result[i][j]);
				if (result[i][j + 1])
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
