/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orderbyalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:07:26 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 11:33:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

static int	get_value(char c)
{
	int initialval;

	initialval = (int)c;
	if (initialval <= 122 && initialval >= 97)
		initialval = initialval - 32;
	return (initialval);
}

static int	ft_strcmp(char *str1, char *str2)
{
	int i;
	int val1;
	int val2;

	i = 0;
	while (str1[i] || str2[i])
	{
		val1 = get_value(str1[i]);
		val2 = get_value(str2[i]);
		if (val1 != val2)
		{
			if (val1 > val2)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static int	count_entries(char **groups)
{
	int i;
	
	i = 0;
	while (groups[i])
		i++;
	return (i);
}

static char **order_group(char **groups)
{
	int		entries;
	int		i;
	int 	j;
	char	*tmp;

	entries = count_entries(groups);
	i = -1;
	while (++i < entries)
	{
		j = -1;
		while (++j < entries - 1)
		{
			if (ft_strcmp(groups[j], groups[j + 1]))
			{
				tmp = groups[j];
				groups[j] = groups[j + 1];
				groups[j + 1] = tmp;
			}
		}
	}
	return (groups);
}

char	***orderbyalpha(char ***groups)
{
	int i; 

	i = -1;
	while (groups[++i])
		groups[i] = order_group(groups[i]);
	return (groups);
}
