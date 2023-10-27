/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:11:53 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 17:59:20 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sorc;

	sorc = ft_strlen(src);
	if (size == 0)
		return (sorc);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sorc);
}
// #include <stdio.h>

// int main(void)
// {	
// 	ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
//     write(1, "\n", 1);
//     write(1, dest, 15);
// }