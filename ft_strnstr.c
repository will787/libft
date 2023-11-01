/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:06:48 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/24 15:31:01 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
	{
		return ((char *) big);
	}
	if (ft_strlen(little) > ft_strlen(big))
		return (0);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (little[i] != '\0' && big[j + i] == little[i])
		{
			i++;
		}
		if (little[i] == '\0' && (i + j) <= len)
			return ((char *)(big + j));
		j++;
	}
	return (0);
}
//#include <bsd/string.h>
// int main(void)
// {
//         char *s1 = "aaxx";lll
//         // size_t max = strlen(s1) + 1;
//         // char *i1 = strnstr(s1, "xx", 2);
//         // char *i2 = ft_strnstr(s1, "xx", 2);
// 		printf("result strnstr ==> &&%s\n", strnstr(s1, "xx", 3));
// 		printf("result ft_strnstr ==> &&%s\n", ft_strnstr(s1, "xx", 3));
//         // if (i1 == i2)
//         //         printf("TEST_SUCCESS");
//         // printf("TEST_FAILED");
// 		return(0);
// }