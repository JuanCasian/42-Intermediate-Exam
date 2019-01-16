/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:21:45 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 11:41:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

int		main(int ac, char **av)
{
	char **words;
	char ***result;

	if (ac == 2)
	{
		words = ft_strsplit(av[1]);
		result = groupbylen(words);
		free(words);
		result = orderbyalpha(result);
		print_results(result);	
	}
	else
		ft_putchar('\n');
	return (0);
}
