/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:20:23 by aitlopez          #+#    #+#             */
/*   Updated: 2023/06/07 19:19:14 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
//	t_stack	*stack_b;
//	t_list	*list = NULL;

	if (argc < 2)
	{
		write(2, "Error\nNo correct arguments\n", 27);
		exit (-1);
	}
	ft_is_number(argv);
	ft_min_max_int(argv);
	ft_dup_number(argc, argv);
	stack_a = ft_create_stack_a(argc, argv);
//	stack_b = NULL;
//	ft_check_sort_nbr(stack_a);
	ft_movement_sa(&stack_a);
//	ft_movement_sb(&stack_b);
//	ft_movement_ss(&stack_a, &stack_b);
//	ft_movement_pa(&stack_a, &stack_b);
//	ft_movement_pb(&stack_a, &stack_b);
	while (stack_a)
	{
		printf("%d\n", stack_a->nbr);
		stack_a = stack_a->next;
	}
/*
	while (stack_b)
	{
		printf("%d\n", stack_b->nbr);
		stack_b = stack_b->next;
	}
*/
	return (0);
}
