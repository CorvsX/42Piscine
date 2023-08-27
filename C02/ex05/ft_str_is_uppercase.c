/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:38:14 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/24 00:42:04 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main()
{
	printf("Solo mayusuculas o vacio: %d\n", ft_str_is_uppercase("ABCDEFGHIJKL"));
	printf("Otro tipo de caracteres: %d\n", ft_str_is_uppercase("-_ABCDEF,GJDS"));
} */
