#include "libft.h"


static size_t ft_srchparam(char const *s, char c)
{      
    size_t srch;
    if(!*s)
        return(0);

    srch = 0;
    while(*s)
    {     
        while(*s == c)
            s++;
        if(*s)
            srch++;
        while(*s != c && *s)
            s++;
    }
    return(srch);
}

char    **ft_split(char const *s, char c)
{      
    char **arrspt;
    const char *start;
    size_t len; 
    size_t i;

    // len = ft_strlen(s) + 1; // tem que colocar len  + 1 por conta do null em cada final de string
    // bufferpt = (char *) malloc(len); 
    // if(!bufferpt)
    //     return(NULL);
    // ft_strlcpy(bufferpt, s, len); // aqui ela faz a copia do conteúdo que tá no S e passa para o pt --

    arrspt = (char **)malloc((ft_srchparam(s, c) + 1) * sizeof(char *));
    if(!arrspt)
    {  
        return(NULL);
    }

    i = 0;
    while(*s)
    {
        while(*s == c && *s)
        {
            s++;
        }
        if(*s)
        {
            start = s;
            while(*s != c && *s)
            {
                s++;
            }
            arrspt[i++] = ft_substr(start, 0, s - start);
        }
    }
    arrspt[i] = '\0';
    return (arrspt);
}
int main(void)
{
    char **vetor = NULL;
    int i;
    char c =  32;
    char *s = "                  olol";
    char **result = ft_split(s, ' ');

    vetor = ft_split("um codigo e um sonho um sonho", c);
    i = 0;
    while(vetor[i])
    {
        printf("[%d] %s \n", i, vetor[i]);
        i++;
    }
}