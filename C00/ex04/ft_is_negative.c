/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:05:05 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/15 09:56:18 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else 
	{
		write(1, "P", 1);
	}
}

/* int main()
{
	int number = 0;
	ft_is_negative(number);
	return (0);
}
*/
