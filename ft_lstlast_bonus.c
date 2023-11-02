#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
        return(NULL);
    while(lst -> next)
    {
        lst = lst->next;
    }
    return(lst);
}

#include "libft.h"
#include <stdio.h>

// int main(void)
// {
//     // aqui basicamente ele guarda os elemento
//     // entao o primeiro elemento que foi guardado
//     // sera o ultimo deles, que é "ultimo"
//     t_list *lst = ft_lstnew("ultimo");
//     ft_lstadd_front(&lst, ft_lstnew("meio"));
//     ft_lstadd_front(&lst, ft_lstnew("primeiro"));

//     t_list *end = ft_lstlast(lst);


//     printf("%s\n", (char *) end->content);
// }