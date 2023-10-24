/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:15:33 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/24 17:07:42 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	if (*nptr == NULL)
		return (0);
	while (nptr[i] && (nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	result = 0;
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{	
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>
// int main(void)
// {
// 	const char *pt;
// 	pt = "-12343242";
// 	printf("%d\n", ft_atoi(pt));
// }