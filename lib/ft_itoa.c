/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:26:28 by raqromer          #+#    #+#             */
/*   Updated: 2024/11/02 17:15:25 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_count_digit(long int digit)
{
	int	count;

	count = 0;
	if (digit < 0 || digit > 9)
	{
		return (-1);
	}
	if (digit < 0)
	{
		digit = -digit;
	}
	while (digit > 0)
	{
		if (digit % 10 == digit)
		{
			count++;
		}
		digit /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			cont;
	long int	nbr;

	nbr = n;
	cont = ft_count_digit(nbr);
	str = ft_calloc(sizeof(char), cont + 1);
	if (!str)
		return (NULL);
	str[cont--] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[cont--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
