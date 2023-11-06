/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:18:54 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 12:18:54 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newp;

	newp = (t_list *)malloc(sizeof(t_list));
	if (!newp)
		return (NULL);
	newp -> content = content;
	newp -> next = NULL;
	return (newp);
}
// int	main(void)
// {
// 	char	*str;

// 	t_list	*elem;
// 	str = (char *)malloc(6*sizeof(char));
// 	str = "Hello";
// 	elem = ft_lstnew((void *)str);
// 	printf("%s\n", (char *)elem->content);
// }