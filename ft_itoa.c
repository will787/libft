/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:07:19 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/30 18:33:25 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_count(int n)
{
	size_t i;

	i = 0;
	while(n > 0)
	{
		n /= 10;		
		n--;
		i++;
	}
	printf("%zu", i);
	return(i);
}

char	*ft_itoa(int n)
{
	char *c;
	int i;
	size_t len;
	int nb;
	
	nb = n;
	if(nb == 0)
		return("0");
	
	len = ft_count(nb) + 1;
	c = (char *)malloc((len) * sizeof(char));	

	i = 0;
	while(nb > 0)
	{
		c[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	while(i > 0)
	{
		c[i--];
	}
	return(c);
}

int main(void)
{
	char *res = ft_itoa(.0);
    printf("%s\n", res);
    free(res);	
}
