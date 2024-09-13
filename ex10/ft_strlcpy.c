/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:10:42 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/07 19:21:43 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (size == 0)
		return (srclen);
	while (i < size - 1)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
