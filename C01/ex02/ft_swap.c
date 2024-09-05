/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:50:56 by julitava          #+#    #+#             */
/*   Updated: 2024/08/26 10:51:03 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>  */

void	ft_swap(int*a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("Antes da troca: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Após a troca: x= %d, y = %d\n", x, y);
	return (0);
} */
