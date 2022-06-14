#include <stdio.h>

int main(void)
{
	char	s1[] = "Ola campers";
	char	s2[] = "Nao";
  unsigned int nb = 1;

	printf("Esse é o resultado: %s\n", ft_strncat(s1, s2, nb));
}