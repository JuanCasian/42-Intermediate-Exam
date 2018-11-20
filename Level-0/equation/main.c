/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 20:56:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/11/19 21:00:10 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	equation(int n);

int main(void)
{
	printf("Test with #42\n");
	equation(42);
	printf("\nTest with #111\n");
	equation(111);
	printf("\nTest with #0\n");
	equation(0);
	return(0);
}
