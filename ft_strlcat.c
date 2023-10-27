/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:13:26 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/27 18:41:59 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	lendest;
	size_t	lensrc;

	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (!size || lendest >= size)
	{
		return (size + lensrc);
	}
	if (size - lendest > lensrc)
	{	
		ft_memcpy(dst + lendest, src, lensrc + 1);
	}
	else
	{
		ft_memcpy(dst + lendest, src, size - lendest - 1);
		dst[size - 1] = '\0';
	}
	return (lendest + lensrc);
}
// #include <string.h>
// int main()
// {
// 	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	//printf("Tamanho do src:  %zu\n", max);
// 	size_t dst = strlen(buff1);
// 	//size_t origin = strlcat(buff1, src, max);
// 	//printf("Tamanho do dest: %zu\n\n", dst);
// 	//printf("FUNÇÃO PRINCIPAL: %zu\n\n", origin);
// 	size_t myfunction = ft_strlcat(buff2, src, max);
// 	printf("FUNÇÃO libft: %zu\n", myfunction);
// 	// if (!strcmp(buff1, buff2))
// 	//         printf("TEST_SUCCESS");
// 	// printf("TEST_FAILED"); 
// }
