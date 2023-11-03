/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:25:24 by wivieira          #+#    #+#             */
/*   Updated: 2023/11/03 12:25:24 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main(void)
// {
//     t_list *lst = ft_lstnew("-1234"); 
//     t_list *new = ft_lstnew("123");
//     t_list *news = ft_lstnew("5678");
//     t_list *news2 = ft_lstnew("comerbiscoito");
//     ft_lstadd_front(&lst, new);
//     ft_lstadd_front(&lst, news);
//     ft_lstadd_front(&lst, news2);
//     t_list *current = lst;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//         //current vai sempre decrementar no caso então ele tá
//         // olhando de cima para baixo, onde ele ve a possicao atual
//         //e depois faz uma recursividade para olhar agora para prox pos;
//     }
//     //print_list_rever(lst); funcao criada apenas para fazer a 
//     // lista ao contrário.
//     return 0;
// }