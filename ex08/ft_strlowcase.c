/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:42:38 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/07 19:23:03 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

// int main (void)
// {
// 	char	test[4] = "AaA";
// 	char	test1[4] = "AAA";
// 	char	test2[4] = "1aA";
// 	ft_strlowcase(test);
// 	ft_strlowcase(test1);
// 	ft_strlowcase(test2);
// 	write (1, test, 4);
// 	write (1, "\n", 1);
// 	write (1, test1, 4);
// 	write (1, "\n", 1);
// 	write (1, test2, 4);
// }