/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarson- <gmarson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:54:50 by gmarson-          #+#    #+#             */
/*   Updated: 2022/02/06 20:59:27 by gmarson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_top(int length)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == length)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	put_middle(int length)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		if (i == 1 || i == length)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	put_bottom(int length)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == length)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
			put_top(x);
		else if (j == y)
		{
			put_bottom(x);
		}
		else
			put_middle(x);
		j++;
	}	
}
