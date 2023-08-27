/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:46:39 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/25 18:54:08 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0') 
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int main() {
    char source[] = "Hola amigos de Youtube";
    char destination[20];
    unsigned int n = 11;

    ft_strncpy(destination, source, n);
    
    printf("Original: %s\n", source);
    printf("Copia del original: %s\n", destination);

    return 0;
} */
