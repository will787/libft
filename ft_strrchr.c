/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:29:19 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/23 15:10:10 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char * last;
	
	last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last = s;
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *) last);
}
