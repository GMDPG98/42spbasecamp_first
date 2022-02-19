/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarson- <gmarson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:03:35 by gmarson-          #+#    #+#             */
/*   Updated: 2022/02/16 16:13:52 by gmarson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 'A' && str[count] <= 'Z'))
			return (0);
		count++;
	}
	return (1);
}
