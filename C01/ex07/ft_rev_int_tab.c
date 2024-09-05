/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:26:42 by julitava          #+#    #+#             */
/*   Updated: 2024/08/28 10:26:48 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	comeco;
	int	fim;
	int	temp;

	comeco = 0;
	fim = size - 1;
	while (comeco < fim)
	{
		temp = tab[comeco];
		tab[comeco] = tab[fim];
		tab[fim] = temp;
		comeco++;
		fim--;
	}
}

/* int	main(void)
{
	int	arr[5];
	int	size;
	int	length;

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	length = 0;
	size = sizeof(arr) / sizeof(arr[0]);
	ft_rev_int_tab(arr, size);
	while (length < size)
	{
		printf("%d ", arr[length]);
		length++;
	}
	return (0);
} */
