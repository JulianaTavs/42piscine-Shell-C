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
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	l;

	if (n < 0)
	{
	l = 'N';
	}
	else
	{
	l = 'P';
	}
	write(1, &l, 1);
	return ;
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/