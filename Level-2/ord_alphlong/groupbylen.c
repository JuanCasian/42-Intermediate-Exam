/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groupbylen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 10:09:25 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 11:04:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

int		count_entries(char **words)
{
	int i;

	i = 0;
	while(words[i])
		i++;
	return (i);
}

int		count_groups(char **words, int nwords)
{
	int wordscount;
	int groups;
	int groupn;
	int i;
	int flag;

	wordscount = 0;
	groups = 0;
	groupn = 1;
	while (wordscount < nwords)
	{
		flag = 0;
		i = -1;
		while (words[++i])
		{
			if (ft_strlen(words[i]) == groupn)
			{
				wordscount++;
				flag = 1;
			}
		}
		groupn++;
		if (flag)
			groups++;
	}
	return (groups);
}

char	***add_words(int ngroups, char **words)
{
	char	***res;
	int		len;
	int		count;
	int		agroups;
	int		i;
	int		y;

	len = 1;
	agroups = 0;
	//allocate memory for groups
	if (!(res = (char***)malloc(sizeof(char**) * ngroups + 1)))
		return (NULL);
	while (agroups < ngroups)
	{
		count = 0;
		//contar cuantas palabras tienen ese length
		i = -1;
		while (words[++i])
			if (ft_strlen(words[i]) == len)
				count++;
		if (count > 0)
		{
			//asignar memoria para ese length
			if (!(res[agroups] = (char**)malloc(sizeof(char*) * count + 1)))
				return (NULL);
			//poner las palabras en ese length
			i = -1;
			y = -1;
			while(words[++i])
				if (ft_strlen(words[i]) == len)
						res[agroups][++y] = words[i];
			res[agroups][++y] = NULL;
			agroups++;
		}
		len++;
	}
	res[agroups] = NULL;
	return(res);
}

char	***groupbylen(char **words)
{
	int		nwords;
	int		ngroups;
	char	***res;

	//count number of words
	nwords = count_entries(words);
	//find number of groups
	ngroups = count_groups(words, nwords);
	//add words by number of chars
	res = add_words(ngroups, words);
	return (res);
}
