/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:58:04 by jcasian           #+#    #+#             */
/*   Updated: 2019/01/15 20:59:27 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strdup(char *src);

int		main(void)
{
	printf("%s\n", ft_strdup("Hello World"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", ft_strdup("Working all the way"));
	return (0);
}
