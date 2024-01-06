/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:31:50 by hbettal           #+#    #+#             */
/*   Updated: 2023/11/28 19:47:48 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;
	size_t	j;

	if (!dstsize)
		return (ft_strlen(src));
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (dstsize <= d)
		return (s + dstsize);
	j = d;
	i = 0;
	while (src[i] != 0 && d + i < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (d + s);
}
