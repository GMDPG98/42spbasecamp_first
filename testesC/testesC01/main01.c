int main()
{
	int		n;
	int		*pointer1 = &n;
	int		**pointer2 = &pointer1;;
	int		***pointer3 = &pointer2;
	int		****pointer4 = &pointer3;
	int		*****pointer5 = &pointer4;
	int		******pointer6 = &pointer5;
	int		*******pointer7 = &pointer6;
	int		********pointer8 = &pointer7;
	int		*********nbr = &pointer8;
	
	n = 2;
	ft_ultimate_ft(nbr);
	printf("%d", n);
}