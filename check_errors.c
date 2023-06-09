/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:21:35 by aitlopez          #+#    #+#             */
/*   Updated: 2023/05/19 20:33:41 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/**
 * @brief 
 * 
 * @param argv 
 */
void	ft_is_number(char **argv)
{
	int		c1;
	int		c2;

	c1 = 1;
	c2 = 0;
	while (argv[c1] != NULL)
	{
		c2 = 0;
		while (argv[c1][c2])
		{
			if(c2 == 0 && (argv[c1][0] == '-' || argv[c1][0] == '+'))
				c2++;
			if (!ft_isdigit(argv[c1][c2]))
			{
				write(2, "Error\nIt's not a number\n", 24);
				exit (-1);
			}
			c2++;
		}
		c1++;
	}
}

/**
 * @brief 
 * comprueba el valor maximo y minimo de int
 * @param argv 
 */
void	ft_min_max_int(char **argv)
{
	int			c1;
	long int	a;
	
	c1 = 1;
	while (argv[c1])
	{
		a = ft_atol(argv[c1]);
		if ((ft_atol(argv[c1]) > 2147483647)
			|| (ft_atol(argv[c1]) < -2147483648))
		{
			write (2, "Error\nIt's not a int value\n", 28);
			exit (-1);
		}
		else
			c1++;
	}
}

void	ft_dup_number(int argc, char **argv)
{
	int		c1;
	int		c2;

	c1 = 1;
	c2 = c1 + 1;
	while (c1 < argc)
	{
		c2 = c1 + 1;
		while (argv[c2])
		{
			if (ft_atoi(argv[c1]) == ft_atoi(argv[c2]))
			{
				printf("El primer elemento es: %s\n", argv[c1]);
				printf("El segundo elemento es: %s\n", argv[c2]);
				write(1, "Error\n", 6);
				exit (-1);
			}
			c2++;
		}
		c1++;
	}

}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "Error\nNo correct argument\n", 27);
		exit (-1);
	}
	ft_is_number(argv);
	ft_min_max_int(argv);
	ft_dup_number(argc, argv);
	return (0);
}
*/
