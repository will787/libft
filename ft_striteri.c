#include "libft.h"

void    f(unsigned int i, char *c)
{
    char    *str;
    if(*c >= 65 && *c <= 90)
        str = *c + 32;
    else if(*c >=  97 && *c <= 122)
        str = *c - 32;
}

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    if (!s || !f)
        return;

    i = 0;
    while(s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

// int main(void)
// {   
//     char *str;
//     str = "LoReM iPsUm";
//     ft_striteri(str, &f);
//     printf("%s\n", str);
// }