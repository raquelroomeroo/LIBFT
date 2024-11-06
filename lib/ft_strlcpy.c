/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:13:31 by raqromer          #+#    #+#             */
/*   Updated: 2024/11/02 17:14:43 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dstsize;

	dstsize = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > 0)
	{
		if (src_len + 1 < size)
			ft_memcpy(dst, src, src_len + 1);
		else if (dstsize != 0)
		{
			ft_memcpy(dst, src, size -1);
			dst[size - 1] = 0;
		}
	}
	return (src_len);
}
