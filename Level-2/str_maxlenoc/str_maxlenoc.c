/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 09:28:48 by exam              #+#    #+#             */
/*   Updated: 2018/11/27 10:27:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	if (!str)
		return ;
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnew(int len)
{
	char	*res;
	int		i;

	i = -1;
	if (!(res = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (++i <= len)
		res[i] = '\0';
	return (res);
}


int		appeared(char *sample, char *real)
{
	int		i;
	int		max;

	max = ft_strlen(real);
	i = -1;
	while (sample[++i])
	{
		if (i > max)
			return (0);
		if (sample[i] != real[i])
			return (0);
	}
	return (1);
}

int		is_included(char *sample, char *real)
{
	int i;

	i = -1;
	while (real[++i])
	{
		if (appeared(sample, &real[i]))
			return (1);
	}
	return (0);
}

int		is_included_in_all(char *str, char **strs)
{
	int i;

	i = -1;
	while (strs[++i])
	{
		if (!(is_included(str, strs[i])))
			return (0);
	}
	return (1);
}

char	*ft_strdup(char *str)
{
	int 	len;
	char	*res;
	int		i;

	len = ft_strlen(str);
	if (!(res = ft_strnew(len)))
		return (NULL);
	i = -1;
	while (str[++i])
		res[i] = str[i];
	return (res);
}

void	str_maxlenoc(char **strs)
{
	int		maxlen;
	char	*tmp;
	char	*res;
	int		start_index;
	int		curr_index;

	maxlen = ft_strlen(strs[0]);
	start_index = -1;
	res = NULL;
	while (++start_index < maxlen)
	{
		if (!(tmp = ft_strnew(maxlen)))
			return ;
		curr_index = 0;
		while (strs[0][start_index + curr_index])
		{
			tmp[curr_index] = strs[0][start_index + curr_index];
			if (is_included_in_all(tmp, strs) && ft_strlen(res) < ft_strlen(tmp))
			{
				if (res)
					free(res);
				if (!(res = ft_strdup(tmp)))
					return ;
			}
			curr_index++;
		}
		free(tmp);
	}
	if (res)
		ft_putstr(res);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		str_maxlenoc(++av);
	}
	ft_putchar('\n');
	return (0);
}
