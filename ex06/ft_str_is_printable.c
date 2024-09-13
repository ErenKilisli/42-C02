/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:43:51 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/06 15:43:33 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)

{
	int	strlen;
	int	i;

	strlen = 0;
	i = 0;
	while (str[strlen] != '\0')
		strlen++;
	while (!(str[i] <= 31 || str[i] == 127) && str[i] != '\0')
		i++;
	if (strlen == 0)
		return (1);
	else if (strlen == i)
		return (1);
	else
		return (0);
}
