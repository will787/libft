#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *pl;
    t_list  *tmp;
    
    if(!lst || !f)
    {
        return ;
    }
    pl = lst;
    while(pl)
    {
        tmp = (pl -> next);
        (*f)(pl -> content);
        pl = tmp;
    }
}