/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:14:37 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/27 19:00:21 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const*s, int c)
{
	char	cd;

	cd = (unsigned char) c;
	while (*s)
	{	
		if (*s == cd)
			return ((char *) s);
		s++;
	}
	if (c == '\0' || cd == '\0')
		return ((char *) s);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	    char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//         char *d1 = strchr(src, 't' + 256);
// 		printf("%s\n", d1);
// 		int c = 1024;
// 		char p = (char) c;
// 		printf("%d\n", p);
//         char *d2 = ft_strchr(src, 't' + 256);
// 		printf("%s\n", d2);
//         if (d1 == d2)
//                 printf("TEST_SUCCESS");
//         else
// 			printf("TEST_FAILED");
// }
