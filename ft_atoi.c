/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:04:30 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/17 09:05:44 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	count;
	int	mult;
	int	number;
	int	sign;

	mult = 1;
	number = 0;
	count = 0;
	sign = 1;
	while (str[count] == ' ' || ('\t' <= str[count] && str[count] <= '\r'))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		number = (number * 10) + (str[count] - '0');
		count++;
	}
	return (number * mult * sign);
	if (!(str[count] >= '0' && str[count] <= '9'))
		return (0);
}

// #include "libft.h"
// #include <stdio.h>
// int	main(void)
// {
// 	int		val;
// 	char	str[20];
// 	ft_strcpy(str, "   -87");
// 	val = ft_atoi(str);
// 	printf("String value = %s, Int value = %d\n", str, val);
// 	return (0);
// }
