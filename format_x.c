/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntairatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:16:14 by ntairatt          #+#    #+#             */
/*   Updated: 2023/03/09 09:18:28 by ntairatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_x(unsigned int nbr, int *len, char c)
{
	if (nbr >= 16)
	{
		format_p(nbr / 16, len);
		format_p(nbr % 16, len);
	}
	if (nbr <= 16)
	{
		if (nbr >= 0 && nbr <= 9)
			format_c(nbr + '0', len);
		else if (nbr >= 10 && nbr <= 16 && c == 'x')
			format_c((nbr - 10) + 'a', len);
		else if (nbr >= 10 && nbr <= 16 && c == 'X')
			format_c((nbr - 10) + 'A', len);
	}
}
