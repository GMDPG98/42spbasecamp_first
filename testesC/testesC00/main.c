#include <unistd.h>
#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"
#include "ex06/ft_print_comb2.c"
#include "ex07/ft_putnbr.c"
#include "ex08/ft_print_combn.c"

int    main(void)
{
    write(1, "ex00---> ", 9);
    ft_putchar('A');
    write(1, "\n", 1);
    write(1, "ex01---> ", 9);
    ft_print_alphabet();
    write(1, "\n", 1);
    write(1, "ex02---> ", 9);
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    write(1, "ex03---> ", 9);
    ft_print_numbers();
    write(1, "\n", 1);
    write(1, "ex04---> ", 9);
    ft_is_negative(-7);
    ft_is_negative(6);
    ft_is_negative(0);
    ft_is_negative(-2147483648);
    write(1, "\n", 1);
    write(1, "ex05---> ", 9);
    ft_print_comb();
    write(1, "\n", 1);
    write(1, "ex06---> ", 9);
    ft_print_comb2();
    write(1, "\n", 1);
    write(1, "ex07---> ", 9);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(756459293);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    write(1, "ex08---> ", 9);
    ft_print_combn(9);
    write(1, "\n", 1);
    ft_print_combn(2);
    write(1, "\n", 1);
    ft_print_combn(1);
    write(1, "\n", 1);
}