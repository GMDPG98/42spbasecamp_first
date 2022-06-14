#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_print_combn(int n)
{
  int count;

  count = 0;
  while ((n[count] <= '\0') && (n[count] <= '\0'))
  {
    ft_putchar(n);
    if (n[count] < '\0')
      write(1, ", ", 2);
    n[count]++;
  }
}

int main(void)
{
  ft_print_combn(2);
}