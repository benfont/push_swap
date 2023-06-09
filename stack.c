/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitlopez <aitlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:29:32 by aitlopez          #+#    #+#             */
/*   Updated: 2023/05/26 19:27:56 by aitlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 
 * crea y devuelve una lista enlazada representada
 * por una estructura
 * @param argc 
 * @param argv 
 * @return t_stack* 
 */
t_stack	*ft_create_stack_a(int argc, char **argv)
{
	int			start;
	t_stack		*stack_a;
	t_stack		*temp;
	t_stack		*nodo;
	t_list		list;

	start = 2;
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_a->next = NULL;
	temp = stack_a;
	temp->nbr = ft_atoi(argv[1]);
	while (start < argc)
	{
		nodo = (t_stack *)malloc(sizeof(t_stack));
		if (!nodo)
			return (NULL);
		nodo->nbr = ft_atoi(argv[start]);
		temp->next = nodo;
		temp = temp->next;
		start++;
	}
	list.length_a = start - 1;
//	list->length_a = 0;
	printf("el length de argv es: %d\n", list.length_a);
	temp->next = NULL;
	return (stack_a);
}

void	ft_check_sort_nbr(t_stack *stack_a)
{
	t_stack	*temp;

	temp = stack_a;
	while (temp && temp->next)
	{
		if (temp->nbr < temp->next->nbr)
		{
			write(1, "Todos mis numeros estan ordenados\n", 34);
			exit (0);
		}
		else
		{
			write(1, "mis numeros no estan ordenados\n", 31);
			exit (-1);
		}
		temp = temp->next;
	}
}


/*
 * 1 Check errores
 * 2 Iniciar stacks - PLURAL
 * 4 Mirar si tus valores ya estan en orden
 * EN ESTE PUNTO, TENEMOS QUE TENER TODOS LOS MOVIMIENTOS IMPLEMENTADOS
 * 5 Algotirmo de 3
 * 6 Algoritmo de 4
 * 7 Algoritmo de 5
 * 8 Algoritmo de mas de 5
 * EN ESTE PUNTO, IMPRIMIMOS
 * 9 A limpiar
 */
/*
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
	{
		write(2, "Error\nNo correct arguments\n", 27);
		exit (-1);
	}
	ft_is_number(argv);
	ft_min_max_int(argv);
	ft_dup_number(argc, argv);
	stack_a = ft_create_stack_a(argc, argv);
	stack_b = NULL;
	ft_check_sort_nbr(stack_a);
	while (stack_a)
	{
		printf("%d\n", stack_a->nbr);
		stack_a = stack_a->next;
	}
	return (0);
}
*/
