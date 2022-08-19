#include "libftprintf.h"

int main()
{
/*     printf("\n%d\n", ft_printf("cavalinho %s é o rapidash\n", "ao vento")); */
/*     ft_printf("%%\n"); */
    /* printf("cavalinho %d\n", 5);
    printf("cavalinho %x\n", 101010);
    printf("cavalinho %p\n", free);
    printf("cavalinho %%\n"); */
    printf("\n%d\n", printf("cavalinho %s rapidão\n", NULL));
    printf("\n%d\n", ft_printf("cavalinho %s rapidão\n", NULL));
}

//printf retorna != void -> qtdd de char que escreve
//seg fault no NULL -> tem que escrever o nulo
