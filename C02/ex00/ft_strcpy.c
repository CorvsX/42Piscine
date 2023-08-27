/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:21:32 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/25 18:52:00 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int	main ()
{
	char	src[] = "Hola";
	char	src1[] = "Hola";
	char	dest[] = "wow";
	char	dest1[] = "wow";
	printf("%s", ft_strcpy(dest, src));
	printf("%s\n", ft_strcpy(dest1, src1));
} */
