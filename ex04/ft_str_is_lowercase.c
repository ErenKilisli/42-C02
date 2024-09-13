/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:35:12 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/06 11:41:57 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	strlen;
	int	i;

	strlen = 0;
	i = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	while ('a' <= str[i] && str[i] <= 'z')
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
