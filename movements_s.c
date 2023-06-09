/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:12:03 by aitlopez          #+#    #+#             */
/*   Updated: 2023/06/07 19:10:45 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_movement_sa(t_stack **stack_a)
{
	t_stack	*temp;
	int		nbr;

	temp = *stack_a;
	if (temp->next == NULL)
		return ;
	nbr = temp->nbr;
	temp->nbr = temp->next->nbr;
	temp->next->nbr = nbr;
}

void	ft_movement_sb(t_stack **stack_b)
{
	t_stack *temp;
	int		nbr;

	temp = *stack_b;
	if (temp->next == NULL)
		return ;
	nbr = temp->nbr;
	temp->nbr = temp->next->nbr;
	temp->next->nbr = nbr;
}

void	ft_movement_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_movement_sa(stack_a);
	ft_movement_sb(stack_b);
}
