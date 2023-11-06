#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *pl;
    t_list  *tmp;
    void    *ptv;

    if (!lst || !f || !del)
        return(NULL);

    pl = NULL;
    while(lst)
    {    
        ptv = f(lst -> content); 
        tmp = ft_lstnew(ptv);
        if(!tmp)
        {
            free(ptv);
            ft_lstclear(&pl, (*del));
            return (NULL);
        }
        ft_lstadd_back(&pl, tmp); 
        lst = lst -> next;
    }
    return (pl);
}