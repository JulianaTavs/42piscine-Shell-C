/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 10:56:46 by julitava          #+#    #+#             */
/*   Updated: 2024/08/29 10:56:50 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int*tab, int size)
{
	int	i;
	int	j;
	int	aux;
	int	troca;

	troca = 1;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
			troca = 1;
			aux = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = aux;
			}
			j++;
		}
	i++;
	}
}

/* int	main(void)
{
	int	i;
	int	array[6];
	int	size;

	i = 0;
	size = sizeof(array) / sizeof(array[0]);
	array[0] = 5;
	array[1] = 6;
	array[2] = 2;
	array[3] = 4;
	array[4] = 3;
	array[5] = 1;
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
} */
