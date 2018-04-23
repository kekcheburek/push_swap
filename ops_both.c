/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_both.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 12:14:19 by ekiriche          #+#    #+#             */
/*   Updated: 2018/04/23 12:14:29 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ss(t_stack *s)
{
	sa(s);
	sb(s);
}

void		rr(t_stack *s)
{
	ra(s);
	rb(s);
}

void		rrr(t_stack *s)
{
	rra(s);
	rrb(s);
}