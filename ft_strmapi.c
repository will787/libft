/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:16:32 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 12:16:32 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = ft_calloc(len + 1, 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
// char f(unsigned int i, char c)
// {
//     char str;
//     str = c + 1;
//     return(str);
// }
// int main(void)
// {
//     char str1[] = "aaaBBBBAAAaaDDDDaaa";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }