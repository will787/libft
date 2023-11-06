#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *pl;
    t_list  *tmp;

    if (!lst || !del)
    {
        return ;
    }
    pl = *lst;
    while(pl)
    {
       tmp = pl -> next;
       (*del)(pl -> content);
       free(pl);
       pl = tmp;
    }
    *lst = NULL;
}