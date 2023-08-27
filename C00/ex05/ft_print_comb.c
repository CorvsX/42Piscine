/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amujica- <amujica-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:21:28 by amujica-          #+#    #+#             */
/*   Updated: 2023/08/15 12:11:24 by amujica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_n(char num[])
{
	if (num[0] == '7' && num[1] == '8' && num[2] == '9')
	{
		write(1, num, 3);
	}
	else
		write(1, num, 5);
}

void	ft_print_comb(void)
{
	char	num[5];

	num[0] = '0';
	num[3] = ',';
	num[4] = ' ';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write_n(num);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

/* int main()
{
	ft_print_comb();
}
*/
