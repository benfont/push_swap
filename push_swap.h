/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:22:35 by aitlopez          #+#    #+#             */
/*   Updated: 2023/06/07 19:14:48 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 1

//estructuras
typedef struct s_stack
{
	int					nbr;
	struct s_stack		*next;
} t_stack;

typedef struct s_list
{
	t_stack				*stack_a;
	t_stack				*stack_b;
	int					length_a;
	int					length_b;
} t_list;

//check_errors functions
void		ft_is_number(char **argv);
void		ft_min_max_int(char **argv);
void		ft_dup_number(int argc, char **argv);

//utils functions
long		ft_atol(char *str);
int			ft_atoi(char *str);
int			ft_isdigit(char c);

//stack
t_stack		*ft_create_stack_a(int argc, char **argv);
void		ft_check_sort_nbr(t_stack *stack_a);

//movement_s
void		ft_movement_sa(t_stack **stack_a);
void		ft_movement_sb(t_stack **stack_b);
void		ft_movement_ss(t_stack **stack_a, t_stack **stack_b);

//movement_p
void		ft_movement_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_movement_pb(t_stack **stack_a, t_stack **stack_b);

#endif
