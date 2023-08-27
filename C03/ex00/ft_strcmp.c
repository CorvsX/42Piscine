/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:56:52 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/24 19:11:27 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	char str1[] = "Corvs";
	char str2[] = "universo";
	char str3[] = "pistacho";
	char str4[] = "Corvs";

	int	resultado1 = ft_strcmp(str3, str2);
	int	resultado2 = ft_strcmp(str2, str1);
	int	resultado3 = ft_strcmp(str1, str4);

	printf("%d\n", resultado1);
	printf("%d\n", resultado2);
	printf("%d\n", resultado3);
	return (0);
}
