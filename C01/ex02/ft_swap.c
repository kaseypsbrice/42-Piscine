/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrice <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:20:58 by kbrice            #+#    #+#             */
/*   Updated: 2022/02/01 08:54:21 by kbrice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)

{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("a = %d\nb = %d", a, b);
	return (0);
}
*/
