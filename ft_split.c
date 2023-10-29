#include "libft.h"

size_t countC(char *buffer, char c)
{
    size_t i;
    size_t srch;
    
    srch = 0;
    i = 0;
    while(buffer[i] != '\0')
    {
        if(buffer[i] == (char const)c)
        {
            buffer[i] = '\0';
            srch++;
        }
        i++;
    }
    return(srch);
}

char **ft_split(char const *s, char c)
{      
    char *bufferpt;
    char **arrspt;
    size_t len; 
    size_t srch;
    size_t i;
    size_t start;

    len = ft_strlen(s);
    bufferpt = (char *) malloc(len  + 1); // tem que colocar len  + 1 por conta do null em cada final de string
    if(!bufferpt)
        return(NULL);

    ft_strlcpy(bufferpt, s, len + 1); // aqui ela faz a copia do conteúdo que tá no S e passa para o pt --
    //quando for passar a copy tem que fazer len + 1 também por conta do último nullo 

    i = 0;
    srch = 0;
    while(bufferpt[i] != '\0')
    {
        if(bufferpt[i] == (char const)c)
        {
            bufferpt[i] = '\0';
            srch++;
        }
        i++;
    }
    srch = countC(bufferpt, c);
    arrspt = (char **)malloc((srch + 1) * sizeof(char *));

    if(!arrspt)
    {
        free(bufferpt);
        return (NULL);
    }

    i = 0;
    start = 0;
    while(i < srch + 1)
    {
        arrspt[i] = bufferpt + start;
        while(bufferpt[start] != '\0')
        {
            start++;
        }
        start++;
        i++;
    }
    return(arrspt);
}

int main(void)
{
    char **vetor = NULL;
    char c = 32;
    int i;


    vetor = ft_split("um codigo e um sonho um sonho", c);
    i = 0;
    while(vetor[i])
    {
        printf("[%d] %s \n", i, vetor[i]);
        i++;
    }
    
}