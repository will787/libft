
#include "libft.h"

char	*ft_strdup(const char *s2)
{
    char *pt;
    int i; 
    size_t size = ft_strlen(s2);
    pt = (char *)malloc(size + 1);
    if(!pt)
        return(NULL);
    i = 0;
    ft_memcpy(pt, s2, size + 1);
    return(pt);
}

