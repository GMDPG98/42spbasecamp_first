char    *ft_strcapitalize(char *str)
{
  int i;
  int j;
    
  i = 0; 
  while (str[i] != '\0')
  {
    j = str[i - 1];
    if ((str[i] >= 'a' && str[i] <= 'z') &&
      ((j < '0' || j > '9') && (j < 'A' || j > 'Z') &&
      (j < 'a' || j > 'z')))
    {
      str[i] -= 32;
    }
    i++;
  }
  return (str);
}