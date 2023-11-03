/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:13:21 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 12:24:57 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((len + start) >= ft_strlen(s))
		len = ft_strlen(s) - start;
	pt = malloc (sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		pt[i] = s[start];
		i++;
		start++;
	}
	pt[i] = '\0';
	return (pt);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *str = "01234";
// 	size_t size = 10;
// 	char *ret = ft_substr(str, 10, size);

// 	if (!strncmp(ret, "", 1))
// 	{
// 		free(ret);
// 		printf("TEST_SUCCESS");
// 	}
// 	free(ret);
// 	printf("TEST_FAILED");

// }