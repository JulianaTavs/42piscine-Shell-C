/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:58:24 by julitava          #+#    #+#             */
/*   Updated: 2024/08/21 10:58:34 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digits;

	digits = '0';
	while (digits <= '9')
	{
		write(1, &digits, 1);
		digits++;
	}
	return ;
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/