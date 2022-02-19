/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarson- <gmarson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:36:51 by gmarson-          #+#    #+#             */
/*   Updated: 2022/02/16 15:58:59 by gmarson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		if (!(str[count] >= 'a' && str[count] <= 'z'))
			return (0);
		count++;
	}
	return (1);
}
