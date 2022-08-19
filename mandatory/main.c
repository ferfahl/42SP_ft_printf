#include "libftprintf.h"
#include <limits.h>

int main()
{
//	char *pointer;
/*     printf("\n%d\n", ft_printf("cavalinho %s é o rapidash\n", "ao vento")); */
/*     ft_printf("%%\n"); */
    /* printf("cavalinho %d\n", 5);
    printf("cavalinho %x\n", 101010);
    printf("cavalinho %p\n", free);
    printf("cavalinho %%\n"); */
//    printf("\n%d\n", printf("cavalinho %s rapidão\n", NULL));
	printf("\n%d\n", ft_printf("ft_printf teste %p\n", NULL));
	printf("\n%d\n", printf(".  printf teste %p\n", NULL));
}
