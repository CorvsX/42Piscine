/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:18:54 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/26 23:13:41 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char str1[] = "mochi pistacho";
	char str2[] = "helado vainilla";

	int	resultado = ft_strncmp(str1, str2, 5);

	if (resultado == 0)
	{
		printf("Primeros 5 numeros son iguales.\n");
	}
	else if (resultado < 0)
	{
		printf("Primeros 5 numeros del str1 son mas pequeños.\n");
	}
	else
	{
		printf("Primeros 5 numeros del str1 son mas grandes.\n");
	}
}
