/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:00:11 by julitava          #+#    #+#             */
/*   Updated: 2024/08/26 16:00:17 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int*a, int*b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("Quociente = %d, Resto = %d\n", x, y);
	return (0);
} */
