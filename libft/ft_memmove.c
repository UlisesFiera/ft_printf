/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:48:50 by ulfernan          #+#    #+#             */
/*   Updated: 2024/09/26 19:48:51 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d_cast;
	const char	*s_cast;
	size_t		i;

	d_cast = (char *) dest;
	s_cast = (char *) src;
	if (d_cast < s_cast)
	{
		i = 0;
		while (i < n)
		{
			d_cast[i] = s_cast[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d_cast[i - 1] = s_cast[i - 1];
			i--;
		}
	}
	return (dest);
}
