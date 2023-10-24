/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:33:27 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/24 17:05:47 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp( void *s, const void *s2, size_t n)
{
	char unsigned	*s1;
	char unsigned	*s_t;
	int				i;

	i = 0;
	s1 = (unsigned char *) s;
	s_t = (unsigned char *) s2;
	while (i < n)
	{
		if (s1[i] > s_t[i])
			return (1);
		if (s1[i] < s_t[i])
			return (-1);
		i++;
	}
	return (0);
}
// int main () {
// 	    char *s1 = "atoms\0\0\0\0";
//         char *s2 = "atoms\0abc";
//         size_t size = 8;
//         int i1 = ((memcmp(s1, s2, size) > 0) ? 1 : ((memcmp(s1, s2, size) < 0) ? -1 : 0));
// 		printf("%d\n", i1);
//         int i2 = ((ft_memcmp(s1, s2, size) > 0) ? 1 : ((ft_memcmp(s1, s2, size) < 0) ? -1 : 0));
// 		printf("%d\n", i2);
//         if (i1 == i2)
//                 printf("TEST_SUCCESS");
//         printf("TEST_FAILED");
// }