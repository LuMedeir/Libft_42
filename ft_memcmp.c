/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:55:26 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/17 09:14:34 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str3;
	unsigned char	*str4;
	size_t			count;

	str3 = (unsigned char *) str1;
	str4 = (unsigned char *) str2;
	count = 0;
	while (n > count)
	{
		if (str3[count] > str4[count])
			return (str3[count] - str4[count]);
		if (str3[count] < str4[count])
			return (str3[count] - str4[count]);
		count++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "test test";
// 	char	str2[] = "tesT test";
// 	int result = ft_memcmp(str1, str2, ft_strlen(str1) + 1);
// 	if (result < 0)
// 		printf("'%s' vem antes de '%s'\n", str1, str2);
// 	else if (result == 0)
// 		printf("'%s' e '%s' são iguais\n", str1, str2);
// 	else
// 		printf("'%s' vem depois de '%s'\n", str1, str2);
// 	return (0);
// }