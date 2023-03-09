/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:30:14 by ntairatt          #+#    #+#             */
/*   Updated: 2023/03/06 13:30:35 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_u(unsigned int nbr, int *len)
{
	if (nbr >= 10)
	{
		format_d(nbr / 10, len);
		nbr %= 10;
	}
	if (nbr < 10)
		format_c(nbr + 48, len);
}
