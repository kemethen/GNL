/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:31:25 by kemethen          #+#    #+#             */
/*   Updated: 2018/11/21 13:35:14 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	size_t	nbr;
	int		negatif;

	i = 0;
	nbr = 0;
	negatif = 0;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if (str[i] == 45)
		negatif = 1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		nbr = nbr * 10 + str[i] - 48;
		if (negatif == 0 && nbr > INT64_MAX)
			return (-1);
		if (negatif == 1 && nbr > (size_t)(INT64_MAX) + 1)
			return (0);
		i++;
	}
	if (negatif == 1)
		return (-nbr);
	return (nbr);
}
