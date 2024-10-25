/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:49:40 by ulfernan          #+#    #+#             */
/*   Updated: 2024/10/08 16:20:31 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*strn;
	int		i;

	strn = ft_itoa(n);
	if (!strn)
		return ;
	i = 0;
	while (strn[i])
	{
		write(fd, &strn[i], 1);
		i++;
	}
	free (strn);
}
