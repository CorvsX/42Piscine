/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:31:41 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/24 00:39:46 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main()
{
	printf("Solo minusculas o vacio: %d\n", ft_str_is_lowercase("abcdefghijkl"));
	printf("Otro tipo de caracteres: %d\n", ft_str_is_lowercase("abcde_-fghuj,"));
} */
