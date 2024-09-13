/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:18:51 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/08 18:45:46 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)

{
	int	i;
	int	strlen;

	i = 0;
	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	while ('0' <= str[i] && str[i] <= '9')
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

// int	main(void)
// {
// 	char *test1 = "12345";
// 	char *test2 = "123a45";
// 	char *test3 = "";
// 	char *test4 = "0";

// 	if (ft_str_is_numeric(test1))
// 		write(1, "Test 1 is numeric\n", 18);
// 	else
// 		write(1, "Test 1 is not numeric\n", 22);

// 	if (ft_str_is_numeric(test2))
// 		write(1, "Test 2 is numeric\n", 18);
// 	else
// 		write(1, "Test 2 is not numeric\n", 22);

// 	if (ft_str_is_numeric(test3))
// 		write(1, "Test 3 is numeric\n", 18);
// 	else
// 		write(1, "Test 3 is not numeric\n", 22);

// 	if (ft_str_is_numeric(test4))
// 		write(1, "Test 4 is numeric\n", 18);
// 	else
// 		write(1, "Test 4 is not numeric\n", 22);

// 	return 0;
// }
