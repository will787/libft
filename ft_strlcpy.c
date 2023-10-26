/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:11:53 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/20 15:54:05 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)(dst));
}
// int main(void)
// {	
// 	char dest[20] = "hey";
// 	char src[] = "olamundo";
// 	ft_strlcpy(dest, src, 3); 
// 	printf("%s\n", dest);
// 	// char dest[20] = "";
// 	// char src[] = "olamundo";
// 	// strlcpy(dest, src, i);
// 	// printf("%s\n", dest);	
// }