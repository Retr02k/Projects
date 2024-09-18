#include <unistd.h>

void	ft_sum(int a, int b)
{
	int result = (a + b);
	write(1, &result, 2);
}

void	ft_sub(int a, int b)
{
	int result = (a - b);
	write(1, &result, 2);
}

void	ft_mult(int a, int b)
{
	int result = (a * b);
	write(1, &result, 2);
}

void	ft_div(int a, int b)
{
	if (b == 0)
		write(1, "Error: Division by zero\n", 25);
	else
	{
		int result = (a / b);
		write(1, &result, 2);
	}
}

int main(void)
{
	int	x;
	int	y;
	char	operation;
	
	write(1, "Enter your 1st integer: ", 25);
	read(1, &x, 2);
	write(1, "Enter your 2nd integer: ", 25);
	read(1, &y, 2);
	write(1, "Choose your operation (+, -, *, /): ", 37);
	read(1, &operation, 2);

	if (operation == '+')
		ft_sum(x, y);
	else if (operation == '-')
		ft_sub(x, y);
	else if(operation == '*')
		ft_mult(x, y);
	else if (operation == '/')
		ft_div(x, y);
	else
		write(1, "Error: Invalid operation!\n", 27);
}