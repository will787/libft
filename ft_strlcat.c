/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:13:26 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/23 13:31:37 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	i;
	size_t	j;
	size_t	lenght;

	i = 0;
	if (src == 0 || size == 0)
		return (0);
	while (dst[i])
	{
		i++;
	}
	j = 0;
	while (j < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (i < size)
		lenght = i + ft_strlen(src);
	else
		lenght = i + size;
	return (lenght);	
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int size = 32;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);

//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");
//     return(0);
// }
