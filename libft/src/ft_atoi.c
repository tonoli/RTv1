/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itonoli- <itonoli-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:10:37 by itonoli-          #+#    #+#             */
/*   Updated: 2017/06/26 20:47:41 by itonoli-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		nbr;

	i = 0;
	nb = 0;
	nbr = 1;
	while ((str[i] == '\n' || str[i] == ' ' || str[i] == '\r'
				|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
		nbr = -nbr;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * nb);
}
