/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbettal <hbettal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:43:08 by hbettal           #+#    #+#             */
/*   Updated: 2023/11/19 20:32:33 by hbettal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s || !f)
		return (NULL);
	str = new_str(ft_strlen(s));
	i = 0;
	if (!str)
		return (NULL);
	result = str;
	while (s[i])
	{
		*str++ = f(i, s[i]);
		i++;
	}
	*str = '\0';
	return (result);
}
