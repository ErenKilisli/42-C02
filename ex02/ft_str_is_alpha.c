/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:19:36 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/06 18:10:14 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)

{
	int	i;
	int	strlen;

	i = 0;
	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	while (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
	{
		i++;
	}
	if (i == strlen)
		return (1);
	else if (strlen == 0)
		return (1);
	else
		return (0);
}
