/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:12:52 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/14 13:14:55 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter; 

	letter = 'z'; 
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
/*	int main()
{
	ft_print_reverse_alphabet();
}
*/
