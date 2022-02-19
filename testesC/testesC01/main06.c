#include <stdio.h>

int    ft_strlen(char *str);

int main(void)
{
    char a[12] = "Olá Campers";
    char *ptr;
    int    size;

    ptr = a;    
    
    size = ft_strlen(ptr);

    printf("\n O tamanho da variavel é : %d \n", size);
}