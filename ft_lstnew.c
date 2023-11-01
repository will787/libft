#include "libft.h"

t_list *ft_lstnew(void *content)
{   
    t_list  *newp;

    newp = malloc(sizeof(t_list));
    if(!newp)
        return(NULL);

    newp -> content = content;
    newp -> next = NULL;

    return(newp);
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