/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:35:32 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/06 12:39:28 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	strlen;
	int	i;

	strlen = 0;
	i = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	while ('A' <= str[i] && str[i] <= 'Z')
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
