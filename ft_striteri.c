/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:15:17 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 13:15:17 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void    f(unsigned int i, char *c)
// {
//     char    *str;
//     if(*c >= 65 && *c <= 90)
//         str = ft_tolower(c);
//     else if(*c >=  97 && *c <= 122)
//         str = ft_toupper(c);
// }

// int main(void)
// {   
//     char *str;
//     str = "LoReM iPsUm";
//     ft_striteri(str, &f);
//     printf("%s\n", str);
// }