/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:19:35 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/18 13:20:57 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

// #include <stdio.h>
// #include <unistd.h>
// int    main(void)
// {
//     char    str[] = "test test";
//     ft_strlen(str);
//     write(1, str, 12);
//     printf(" has the quantity of= %d\n", ft_strlen(str));
//     return (0);
// }