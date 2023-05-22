/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:40:57 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/18 11:17:16 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*str;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = 0;
	while (s1[start] != 0 && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start + 1;
	str = (char *)malloc(sizeof(char) * (len));
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, (char *)(s1 + start), len);
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s1[] = " test test ";
// 	char	set[] = " ";
// 	char *result = (ft_strtrim(s1, set));
// 	printf("%s\n", result);
// }
