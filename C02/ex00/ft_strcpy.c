/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrice <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:14:34 by kbrice            #+#    #+#             */
/*   Updated: 2022/01/28 10:55:58 by kbrice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)

{
	char src[] = "Hello";
	char src1[] = "Goodbye";
	char dest[] = "Yes";
	char dest1[] = "No";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", ft_strcpy(dest1, src1));
}
*/
