#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;
	long	num;
	
	num = n;
	if (num < 0)
	{
		write(fd, '-', 1);
		n *= -1;
	}
	if (num < 10)
	{
		c = num + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}