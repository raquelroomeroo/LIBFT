/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqromer <raqromer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:50:11 by raqromer          #+#    #+#             */
/*   Updated: 2024/10/16 18:28:30 by raqromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 48 && c <= 57) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}

// int main(void)
// {
//     int c = 122;
//     printf("res: %d", ft_isalnum(c));
//     return 0;
// }