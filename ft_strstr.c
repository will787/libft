/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivieira <wivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:25:14 by wivieira          #+#    #+#             */
/*   Updated: 2023/10/24 17:28:04 by wivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    const char *hay;
    const char *need;
    int i;
    int j;

    hay = haystack;
    need = needle;
    j = 0;
    while (need[j])
    {
        j++;
    }
    i = 0;
    while(hay[i] != '\0')
    {   
        j = 0;
        while(need[j] == hay[i + j])
        {   
            if(need[j + 1] == '\0')
                return((char *)(hay + i));
            j++;
        }
        i++;
    }
    return(NULL);
}

// int main(void)
// {
//     const char *str1 = "Isso é um exemplo de uma string de teste.";
//     const char *str2 = "exemplo";

//     char *resultado = strstr(str1, str2);
//     char *resultmy  = ft_strstr(str1, str2);
//     printf("%s\n", resultado);
//     printf("%s\n", resultmy);
//     // if (resultmy != NULL) {
//     //     printf("Substring encontrada: %s\n", resultmy);
//     // } else {
//     //     printf("Substring não encontrada.\n");
//     // }
    
//     // if (resultado != NULL) {
//     //     printf("Substring encontrada: %s\n", resultado);
//     // } else {
//     //     printf("Substring não encontrada.\n");
//     // }

//     return 0;
// }