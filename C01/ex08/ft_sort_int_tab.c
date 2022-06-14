void ft_sort_int_tab(int *tab, int size)
{
  if (size <= 1)
    return;

  ft_sort_int_tab(tab, size-1);
 
  int last = tab[size-1];
  int j = size-2;
 
  while ((j >= 0) && (tab[j] > last))
  {
    tab[j+1] = tab[j];
    j--;
  }
  tab[j+1] = last;
}