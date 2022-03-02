/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrice <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:02:29 by kbrice            #+#    #+#             */
/*   Updated: 2022/01/21 10:38:35 by kbrice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	reverseletter;

	reverseletter = 'z';
	while (reverseletter >= 'a')
	{
		write (1, &reverseletter, 1);
			reverseletter--;
	}
}
