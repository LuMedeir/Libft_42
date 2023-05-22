/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:45:18 by lumedeir          #+#    #+#             */
/*   Updated: 2023/05/18 15:11:33 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (SIZE_MAX / size < num)
		return (NULL);
	totalsize = num * size;
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}

// int	main () {
// 	int i, n;
// 	int *a;
// 	printf("Number of elements to be entered:");
// 	scanf("%d",&n);
// 	a = (int*)ft_calloc(n, sizeof(int));
// 	printf("Enter %d numbers:\n",n);
// 	for( i=0 ; i < n ; i++ ) {
// 	scanf("%d",&a[i]);
// 	}
// 	printf("The numbers entered are: ");
// 	for( i=0 ; i < n ; i++ ) {
// 	printf("%d ",a[i]);
// 	}
// 	free( a );
// 	return(0);
// }