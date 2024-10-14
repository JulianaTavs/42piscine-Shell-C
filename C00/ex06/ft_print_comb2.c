#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	char	nums[5];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			nums[0] = (i / 10) + '0';
			nums[1] = (i % 10) + '0';
			nums[2] = ' ';
			nums[3] = (j / 10) + '0';
			nums[4] = (j % 10) + '0';
			write(1, nums, 5);
			if(i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}
