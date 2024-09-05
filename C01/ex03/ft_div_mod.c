/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:16:15 by julitava          #+#    #+#             */
/*   Updated: 2024/08/26 12:16:22 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int*div, int*mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}	
}

/* int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("Divisão de %d por %d: Quociente = %d, Resto = %d\n", a, b, div, mod);
	return (0);
} */
