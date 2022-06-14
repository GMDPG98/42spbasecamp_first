#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combo(int n, int holders[])
{
	int		index;
	int	  last;

	index = 0;
	while (index++ < n)
	{
		ft_putchar('0' + holders[index]);
	}
	index = n - 1;
	last = 1;
	while (index >= 0)
	{
		if (holders[index] != 9 - (n - 1 - index))
		{
			last = 0;
			break;
		}
		index--;
	}
	if (!last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int n, int curr, int holders[], int st_index)
{
	int index;
	int max;

	if (curr == n)
	{
		ft_write_combo(n, holders);
	}
	else
	{
		max = 10 - (n - curr);
		index = st_index + 1;
		while (index <= max)
		{
			holders[curr] = index;
			ft_print_combn_recursive(n, curr + 1, holders, index);
			index++;
		}
	}
}

void	ft_print_combn(int n)
{
	int holders[10] = {0};

	ft_print_combn_recursive(n, 0, holders, -1);
}

int		main(void)
{
	ft_print_combn(2);
}