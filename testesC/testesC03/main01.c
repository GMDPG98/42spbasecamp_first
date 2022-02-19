#include <stdio.h>

int main(void)
{
	char	s1[] = "Olá campers";
	char	s2[] = "3262387";
	unsigned int	ret;
	unsigned int	n;
	
	n = 2;
	ret = ft_strcmp(s1, s2, n);
	printf("Esse é o resultado: %d\n", ret);
}