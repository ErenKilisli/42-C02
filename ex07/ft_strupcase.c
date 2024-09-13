/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:11:49 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/07 18:37:36 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

// int main (void)
// {
// 	char 	test[4] = "AAA";
// 	char	test1[4] = "aaa";
// 	char	test2[4] = "1aA";
// 	ft_strupcase(test);
// 	ft_strupcase(test1);
// 	ft_strupcase(test2);
// 	write (1, test, 4);
// 	write (1, "\n", 4);
// 	write (1, test1, 4);
// 	write (1, "\n", 4);
// 	write (1, test2, 4);
// 	write (1, "\n", 4);
// }