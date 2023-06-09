/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:44:36 by aitlopez          #+#    #+#             */
/*   Updated: 2023/06/07 20:19:26 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * toma el primer elemento del stack_b y lo pone encima de stack_a
 * no hace nada si stack_b esta vacio
*/
void	ft_movement_pa(t_stack **stack_a, t_stack **stack_b)
{

}

/*
 * Toma el primer elemento del stack_a y lo pone encima de stack_b
 * No hace nada si stack_a esta vacio
*/
void	ft_movement_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = (*stack_a)->next;
	if (*stack_a == NULL)
		return ;
	temp_b = *stack_b;
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		(*stack_b)->next = NULL;
		*stack_a = temp_a;
	}
	else
	{
		*stack_b = *stack_a;
		(*stack_b)->next = temp_b;
		*stack_a = temp_a;
	}
	write (1, "pb\n", 3);
}
