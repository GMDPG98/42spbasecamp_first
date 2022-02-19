#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char	dest[10] = "oi";
	char	src[10] = "Teste sim";
	
	printf("%s\n", ft_strcpy(dest, src));
}