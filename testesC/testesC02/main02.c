#include <stdio.h>

int		ft_str_is_alpha(char *str);

int main(void)
{
	char	str[] = "646545";
	char	str1[] = "aasdVERER";
	char	str2[] = "";
	int		retorno;

	retorno = ft_str_is_alpha(str);
	printf("Apenas números: %d\n", retorno);
	printf("Maiúscula e minúscula: %d\n", ft_str_is_alpha(str1));
	printf("Empty: %d\n", ft_str_is_alpha(str2));
}