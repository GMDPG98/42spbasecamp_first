int main()
{
	int		na;
	int		nb;
	int		*a = &na;
	int		*b = &nb;
	
	na = 2;
	nb = 3;
	ft_swap(a, b);
	printf("%d%d", *a, *b);
}