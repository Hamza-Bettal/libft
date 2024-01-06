/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:32:32 by hbettal           #+#    #+#             */
/*   Updated: 2023/11/28 19:51:25 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(long nbr)
{
	int	ccount;

	ccount = 0;
	if (nbr < 0)
	{
		ccount++;
		nbr *= -1;
	}
	if (nbr == 0)
	{
		ccount++;
	}
	while (nbr)
	{
		if (nbr > 0)
		{
			nbr /= 10;
			ccount++;
		}
	}
	return (ccount);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		l;
	long	nbr;

	nbr = n;
	l = len_int(nbr);
	num = (char *) malloc (l + 1);
	if (!num)
		return (NULL);
	num[l] = '\0';
	l--;
	if (nbr == 0)
		num[0] = 0 + 48;
	if (nbr < 0)
	{
		nbr *= -1;
		num[0] = '-';
	}
	while (nbr > 0)
	{
		num[l] = nbr % 10 + 48;
		nbr /= 10;
		l--;
	}
	return (num);
}
