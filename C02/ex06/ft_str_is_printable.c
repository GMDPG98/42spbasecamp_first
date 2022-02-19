/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarson- <gmarson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:29:20 by gmarson-          #+#    #+#             */
/*   Updated: 2022/02/17 23:55:15 by gmarson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 32 && str[count] <= 126))
			return (0);
		count++;
	}
	return (1);
}
