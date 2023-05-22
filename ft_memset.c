/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:23:49 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/17 09:15:52 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str2;
	size_t	count;

	str2 = (char *) str;
	count = 0;
	while (n > count)
	{
		str2[count] = c;
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "test test";
// 	ft_memset(str, 'p', 4);
// 	printf("%s\n", str);
// }
