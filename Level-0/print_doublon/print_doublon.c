/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 09:02:49 by exam              #+#    #+#             */
/*   Updated: 2018/11/27 09:07:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    print_doublon(int *a, int na, int *b, int nb)
{
	int i;
	int j;
	int flag;

	i = -1;
	j = 0;
	flag = 0;
	while (++i < na)
	{
		while (b[j] < a[i] && j < nb)
			j++;
		if (a[i] == b[j])
		{
			if (flag)
				printf(" ");
			printf("%i", a[i]);
			flag = 1;
		}
	}
	printf("\n");
}
