/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:47:45 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/23 14:50:06 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	const unsigned char	*rst;
	unsigned char *cd;
	
	if(n == 0)
	{
		return(NULL);
	}
	cd = (unsigned char) c;
	rst = (const unsigned char *) s;
	while (n > 0)
	{
		if (*rst == cd)
			return((void *) rst);
		rst++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main () {
// 	const char str[] = "https://www.tutorialspoint.com";
// 	const char ch = '.';
// 	char *ret1;
// 	ret1 = memchr(str, ch, 2);
// 	printf("String after |%c| is - |%s|\n", ch, ret1);
	
// 	const char st[] = "https://www.tutorialspoint.com";
// 	const char chr = '.';
// 	char *ret2;

	
// 	ret2 = ft_memchr(st, chr, 2);
// 	printf("String after |%c| is - |%s|\n", chr, ret2);

// 	return(0);
// }
