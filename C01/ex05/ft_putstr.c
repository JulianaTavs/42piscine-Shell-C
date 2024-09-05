/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:45:18 by julitava          #+#    #+#             */
/*   Updated: 2024/08/27 09:45:25 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char*str)
{
	if (str == NULL)
	{
		return ;
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/* int	main(void)
{
	char	my_string[7];

	strcpy(my_string, "E aê?");
	ft_putstr(my_string);
	return (0);
} */
