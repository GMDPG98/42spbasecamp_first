#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char	dest[10] = "oi";
	char	src[10] = "Teste sim";
	unsigned int		n = 6;
	
	printf("%s\n", ft_strncpy(dest, src, n));
}