/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:44:27 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/25 17:31:27 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sorc;

	dst = (unsigned char *) dest;
	sorc = (const unsigned char *) src;
	if (dst > sorc)
	{
		while (n--)
		{
			dst[n] = sorc[n];
		}
	}
	else
	{
		ft_memcpy (dst, src, n);
	}
	return (dest);
}
// int main () {
// 	char dest[10] = "oldstring";
// 	const char src[10]  = "newstring";

// 	printf("Before memmove dest = %s, src = %s\n\n", dest, src);
// 	memmove(dest, src, 3);
// 	printf("ORIGIN: After memmove DEST = %s, src = %s\n\n", dest, src);
// 	char des[10] = "oldstring";
// 	const char srce[10]  = "newstring";
// 	ft_memmove(des, srce, 3);
// 	printf("FT: After ft_memmove DEST = %s, src = %s\n", dest, src);
// 	return(0);
// }
