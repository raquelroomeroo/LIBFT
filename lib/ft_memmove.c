/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:13:59 by raqromer          #+#    #+#             */
/*   Updated: 2024/11/04 20:30:42 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	i = -1;
	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	if (!c_dest && !c_src)
		return (NULL);
	if (c_dest <= c_src)
	{
		while (++i < n)
			c_dest[i] = c_src[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			c_dest[i] = c_src[i];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
// 	ft_memmove(s0, s, 7);
// 	ft_memmove(s, s + 2, 0);
// 	ft_memmove(s, s + 2, 2);
// 	ft_memmove(sResult + 1, sResult, 2);
// 	return (0);
// }
