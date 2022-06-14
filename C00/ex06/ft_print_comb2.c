#include <unistd.h>

void    ft_print_comb2(void)
{
  char  transform;
  int a;
  int b;

  a = -1;
  while (a++ < 98)
  {
    b = a;
    while (b++ < 99)
    {
      transform = (a / 10) + '0';
      write(1, &transform, 1);
      transform = (a % 10) + '0';
      write(1, &transform, 1);
      write(1, " ", 1);
      transform = (b / 10) + '0';
      write(1, &transform, 1);
      transform = (b % 10) + '0';
      write(1, &transform, 1);
      if (a < 98)
        write(1, ", ", 2);
    }
  }
}