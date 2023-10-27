/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:47:45 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 17:26:27 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	const unsigned char	*rst;
	unsigned char		cd;

	cd = c;
	rst = s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (*rst == cd)
			return ((void *) rst);
		rst++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main () {
//         char *src = "/|\x12\xff\x09\0\x42\042\\42|\\";
//         int size = 12;
//         if (memchr(src, '\0', size) == ft_memchr(src, '\0', size))
//                 printf("TEST_SUCCESS");
//         else
// 			printf("TEST_FAILED");	
// }