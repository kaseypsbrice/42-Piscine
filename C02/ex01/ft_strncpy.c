/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrice <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:41:42 by kbrice            #+#    #+#             */
/*   Updated: 2022/01/31 14:53:37 by kbrice           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)

{
	char dest[] = "exam00";
	char src[] = "123456789";
	char dest1[] = "exam02";
	printf("%s\n", strncpy(dest, src, 2));
	printf("%s\n", strncpy(dest1, src, 2));
	printf("%s\n", strncpy(dest, src, 6));
	printf("%s\n", strncpy(dest1, src, 6));
	printf("%s\n", strncpy(dest, src, 7));
	printf("%s\n", strncpy(dest1, src, 7));
}
*/
