/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarson- <gmarson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:55:46 by gmarson-          #+#    #+#             */
/*   Updated: 2022/02/08 18:56:43 by gmarson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{
			while (numbers[2] <= '9')
			{
				write(1, numbers, 3);
				if (numbers[0] < '7')
					write(1, ", ", 2);
				numbers[2]++;
			}
			numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
		numbers[0]++;
		numbers[1] = numbers[0] + 1;
		numbers[2] = numbers[1] + 1;
	}
}
