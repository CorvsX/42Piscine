/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:01:47 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/27 01:19:14 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	a = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (a < nb && src[a] != '\0')
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i+a] = '\0';
	return (dest);
}

int	main()
{
	char src[] = "Pictures";
	char dest[] = "Universal";
	printf("%s", ft_strncat(dest, src, 8));
}
