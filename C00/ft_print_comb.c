/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:23:32 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/25 20:30:22 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + '1';
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a + '0', 2);
				write(1, &b + '0', 2);
				write(1, &c + '0', 2);
				write(1, ",", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
