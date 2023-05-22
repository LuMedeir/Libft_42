/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:51:45 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/17 09:17:58 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		sizes1;
	int		sizes2;

	if (s1 == 0 || s2 == 0)
		return (0);
	sizes1 = ft_strlen((char *)s1);
	sizes2 = ft_strlen((char *)s2);
	str = malloc((sizes1 + sizes2 + 1) * sizeof(char));
	if (str == 0)
		return (0);
	str = ft_memcpy(str, s1, sizes1);
	ft_memcpy(str + sizes1, s2, sizes2 + 1);
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s1[] = "Hello, ";
// 	char	s2[] = "world!";
// 	char	*result;
// 	result = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
