/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:20:44 by hbettal           #+#    #+#             */
/*   Updated: 2023/11/26 23:04:47 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;
	char	*str;

	i = 0;
	ch = c;
	str = (char *)s;
	while (str[i] != 0)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	if (ch == 0)
		return (str + i);
	return (NULL);
}
