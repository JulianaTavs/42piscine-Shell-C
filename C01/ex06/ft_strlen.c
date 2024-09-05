/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julitava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:51:06 by julitava          #+#    #+#             */
/*   Updated: 2024/08/27 15:51:19 by julitava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/* int	main(void)
{
	char	my_string[7];
	int		leng;

	strcpy(my_string, "E aê?");
	leng = ft_strlen(my_string);
	printf("O comprimento da string é: %d\n", leng);
	return (0);
} */
