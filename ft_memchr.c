/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:10:40 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/18 14:02:17 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str2;
	size_t	count;

	str2 = (char *) str;
	count = 0;
	while (n > count)
	{
		if (str2[count] == (char)c)
			return (&str2[count]);
		count++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char str[] = "test test";
// 	const char c = 's';
// 	char *ret;
// 	ret = ft_memchr(str, c, ft_strlen((char *)str));
// 	printf("The char |%c| was found in: %s\n", c, ret);
// 	return (0);
// }