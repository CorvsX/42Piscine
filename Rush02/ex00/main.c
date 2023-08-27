/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:21:19 by emartin2          #+#    #+#             */
/*   Updated: 2023/08/26 18:33:34 by emartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		if (ft_atoi(av[1]) < 0)
		{
				write(1, "Error", 5);				
				return (-1);
		}	
	}
	else if (argc == 3)
	{
		write(1, "3 args", 6);
	}
	else
	{
		write(1, "Error", 7);
	}
	write(1, "\n", 1);
}
