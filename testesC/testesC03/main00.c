#include <stdio.h>

int main(void)
{
	char	s1[] = "Olá campers";
	char	s2[] = "3262387";
	int		ret;

	ret = ft_strcmp(s1, s2);
	printf("Esse é o resultado: %d\n", ret);
}