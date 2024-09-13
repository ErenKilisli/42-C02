/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:24:46 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/08 12:05:17 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i - 1] && str[i - 1] <= 'z')
				|| ('A' <= str[i - 1] && str[i - 1] <= 'Z')
				|| ('0' <= str[i - 1] && str[i - 1] <= '9')))
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char	string[62] = "salut, comment tu vas ? 
//2mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(string);
// 	write (1, string, 62);
// } 