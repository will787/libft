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
	const unsigned char *last;
	const unsigned char *cd;

	last = NULL;
	cd = (const unsigned char *) &c; 
	if(s == NULL)
	{
		return(NULL);
	}

	while (*s != '\0')
	{
		if (*s == *cd)
			last = (unsigned char *)s;
		s++;
	}
	if(c == '\0' || *cd == '\0')
	{
			return (char *) s;
	}
	return ((char *) last);
}
