/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:54:50 by hbettal           #+#    #+#             */
/*   Updated: 2023/11/29 17:27:10 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char		*place;
	size_t				i;

	if (size && count > (SIZE_MAX / size))
		return (NULL);
	i = 0;
	place = malloc(count * size);
	if (place == NULL)
		return (NULL);
	while (i < count * size)
		place[i++] = 0;
	return (place);
}
