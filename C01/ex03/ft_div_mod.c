/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrice <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:37:58 by kbrice            #+#    #+#             */
/*   Updated: 2022/02/01 08:56:37 by kbrice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)

{
	int	a;
	int	b;
	int	division;
	int	modulo;

	a = 42;
	b = 12;
	ft_div_mod(a, b, &division, &modulo);
	printf("%d by %d = %d\nremainder = %d", a, b, division, modulo);
}
*/
