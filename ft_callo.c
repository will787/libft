#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    char *pt;

    pt = malloc(nmemb * size);
    if(!pt)
        return(NULL);
    
    ft_bzero(pt, nmemb * size);
    // essa função abre uma alocação de memória, onde pega o tamanho da string e dentro dessa string coloca tudo '\0' em cada posição.
}
