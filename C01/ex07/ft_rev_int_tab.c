void    ft_rev_int_tab(int *tab, int size)
{
  int i, temp;
  i = 0;
  while (i < 2)
  {
    temp = tab[i];
    tab[i] = tab[size -1 -i];
    tab[size -1 -i] = temp;
    i++;
  }
}