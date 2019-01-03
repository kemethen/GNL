/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemethen <kemethen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:27:12 by kemethen          #+#    #+#             */
/*   Updated: 2018/11/21 12:00:41 by kemethen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_div(int a, int b, int result, char op)
{
	if (op == '/')
	{
		if (b == 0)
		{
			ft_putstr("Stop : division by zero.\n");
			return ;
		}
		result = a / b;
	}
	else
	{
		if (b == 0)
		{
			ft_putstr("Stop : modulo by zero.\n");
			return ;
		}
		result = a % b;
	}
	ft_putnbr(result);
	ft_putchar('\n');
}

static void	ft_add_sous(int a, int b, int result, char op)
{
	if (op == '+')
		result = a + b;
	else
		result = a - b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void		ft_doop(int a, char op, int b)
{
	int		result;

	result = 0;
	if (op == '+' || op == '-')
		ft_add_sous(a, b, result, op);
	else if (op == '*')
	{
		result = a * b;
		ft_putnbr(result);
		ft_putchar('\n');
	}
	else if (op == '/' || op == '%')
		ft_div(a, b, result, op);
	else
		ft_putstr("Stop : wrong arguments.\n");
}
