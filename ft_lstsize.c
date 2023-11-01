#include "libft.h"

int ft_lstsize(t_list *lst)
{   
    int count;
    
    count = 0;
    while(lst)
    {
        count++;
        lst = lst->next;
    }
    return(count);
}

// int main(void)
// {
//     t_list *ls;
//     ls = ft_lstnew("12345");
//     int size = ft_lstsize(ls);

//         printf("Tamanho da lista: %d\n",  size);
// }