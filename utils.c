/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:59:02 by aitlopez          #+#    #+#             */
/*   Updated: 2023/05/19 20:34:30 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *str)
{
	int		count;
	int		sign;
	long 	nb;

	count = 0;
	sign = 1;
	nb = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\n')
		count++;
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	if (str[count] == '+')
		count++;
	while (str[count] != '\0' && (str[count] >= '0' && str[count] <= '9'))
	{
		nb = (nb * 10) + (str[count] - '0');
		count++;
	}
	return (nb * sign);
}


int	ft_atoi(char *str)
{
	int		new;
	int		i;
	int		j;

	j = 1;
	i = 0;
	new = 0;
	while (str[i] == ' ' || ((str[i] >= '\t' && (str[i] <= '\r'))))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		new = str[i] - '0' + (new * 10);
		if (str[i + 1] < '0' || str[i + 1] > '9')
			break ;
		i++;
	}
	return (new * j);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
