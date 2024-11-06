#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i; 

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

int	main(void)
{
	char	origem[] = "Voe por todo o mar.";
	char	destino[25];

	ft_strcpy(destino, origem);
	printf("%s\n", destino);
	return (0);
}
