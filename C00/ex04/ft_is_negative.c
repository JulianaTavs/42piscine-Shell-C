/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:50:52 by julitava          #+#    #+#             */
/*   Updated: 2024/08/21 15:51:19 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letra;

	if (n < 0)
	{
	letra = 'N';
	}
	else
	{
	letra = 'P';
	}
	write(1, &letra, 1);
	return ;
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
