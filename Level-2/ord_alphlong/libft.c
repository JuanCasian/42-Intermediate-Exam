/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:26:08 by exam              #+#    #+#             */
/*   Updated: 2019/01/15 10:03:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord_alphlong.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while(str[++i])
		ft_putchar(str[i]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnew(int n)
{
	char 	*res;
	int		i;

	i = -1;
	if (!(res = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (++i <= n)
		res[i] = '\0';
	return (res);

}

char	*ft_strndup(char *str, int n)
{
	char	*res;
	int		i;

	i = -1;
	if (!(res = ft_strnew(n)))
		return (NULL);
	while (++i < n)
		res[i] = str[i];
	return (res);
}

int		ft_wordcount(char *str)
{
	int count;

	count = 0;
	while(*str)
	{
		while(*str && (*str == ' ' || *str == '\t'))
			str++;
		if (*str && (*str != ' ' && *str != '\t'))
			count++;
		while(*str && (*str != ' ' && *str != '\t'))
			str++;
	}
	return (count);
}

char	**ft_strsplit(char *str)
{
	char	**res;
	int		wcount;
	int		i;

	wcount = ft_wordcount(str);
	if (!(res = (char**)malloc(sizeof(char*) * wcount + 1)))
		return (NULL);
	wcount = 0;
	while (*str)
	{
		while(*str && (*str == ' ' || *str == '\t'))
			str++;
		i = 0;
		if (*str && (*str != ' ' && *str != '\t'))
		{
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
				i++;
			res[wcount] = ft_strndup(str, i);
			wcount++;
		}
		while(*str && (*str != ' ' && *str != '\t'))
			str++;
	}
	res[wcount] = NULL;
	return (res);
}
