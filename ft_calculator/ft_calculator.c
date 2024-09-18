#include <stdio.h>

void	ft_sum(int a, int b)
{
	int result = (a + b);
	printf("Sum: %d\n", result);

}

void	ft_sub(int a, int b)
{
	int result = (a - b);
	printf("Subtraction: %d\n", result);
}

void	ft_mult(int a, int b)
{
	int result = (a * b);
	printf("Multiplication: %d\n", result);
}

void	ft_div(int a, int b)
{
	if (b == 0)
		printf("Error: Division by zero\n");
	else
	{
		int result = (a / b);
		printf("Division: %d\n", result);
	}
}

int main(void)
{
	int	x;
	int	y;
	char	operation;
	
	printf("Enter your 1st integer: ");
	scanf("%d", &x);
	printf("Enter your 2nd integer: ");
	scanf("%d", &y);
	printf("Choose your operation (+, -, *, /): ");
	scanf(" %c", &operation);

	if (operation == '+')
		ft_sum(x, y);
	else if (operation == '-')
		ft_sub(x, y);
	else if(operation == '*')
		ft_mult(x, y);
	else if (operation == '/')
		ft_div(x, y);
	else
		printf("Eror: Invalid operation!\n");
	return(0);
}