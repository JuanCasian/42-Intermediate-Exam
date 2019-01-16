/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:53:00 by jcasian           #+#    #+#             */
/*   Updated: 2019/01/15 20:57:39 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strnew(int n)
{
	char *res;
	int i;
	
	if (!(res = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);
	i = -1;
	while (++i <= n)
		res[i] = '\0';
	return (res);
}

char    *ft_strdup(char *src)
{
	char	*res;
	int		i;
	
	if (!(res = ft_strnew(ft_strlen(src))))
		return (NULL);
	i = -1;
	while (src[++i])
		res[i] = src[i];
	return (res);
}
