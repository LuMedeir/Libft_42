/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:10:57 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/19 18:53:23 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*temp;
	char	*temp2;

	if (src == 0 && dest == 0)
		return (0);
	count = 0;
	temp = (char *) dest;
	temp2 = (char *) src;
	while (n > count)
	{
		temp[count] = temp2[count];
		count++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "test test";
// 	char	dest[] = "moretest";
// 	ft_memcpy(dest+2, src, ft_strlen(src) + 1);
// 	printf("%s\n", dest);
// }