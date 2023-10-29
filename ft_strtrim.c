/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:55:25 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/27 19:23:27 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	len = end - start + 1;
	trimmed = ft_substr(s1, start, len);
	return (trimmed);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *s1;
// 	char *set;
// 	s1 = "thiago o nome thiago dele é thiago";
// 	set = "thiago";
// 	printf("%s\n",ft_strtrim(s1, set));	
// }