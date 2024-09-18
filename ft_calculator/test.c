#include <unistd.h>

// Helper function to convert an integer to a string
void int_to_str(int num, char *str)
{
    int i = 0;
    int sign = num;

    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    if (num < 0)
        num = -num;
    while (num > 0)
    {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }
    if (sign < 0)
        str[i++] = '-';

    str[i] = '\0';

    // Reverse the string to get the correct order
    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}

// Helper function to convert a string to an integer
int str_to_int(char *str)
{
    int num = 0;
    int sign = 1;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }

    return num * sign;
}

// Function to calculate the sum
void ft_sum(int a, int b)
{
    int result = a + b;
    char str[12];
    int_to_str(result, str);
    write(1, str, sizeof(str));
    write(1, "\n", 1); // Newline after result
}

// Function to calculate the subtraction
void ft_sub(int a, int b)
{
    int result = a - b;
    char str[12];
    int_to_str(result, str);
    write(1, str, sizeof(str));
    write(1, "\n", 1);
}

// Function to calculate the multiplication
void ft_mult(int a, int b)
{
    int result = a * b;
    char str[12];
    int_to_str(result, str);
    write(1, str, sizeof(str));
    write(1, "\n", 1);
}

// Function to calculate the division
void ft_div(int a, int b)
{
    if (b == 0)
        write(1, "Error: Division by zero\n", 25);
    else
    {
        int result = a / b;
        char str[12];
        int_to_str(result, str);
        write(1, str, sizeof(str));
        write(1, "\n", 1);
    }
}

// Function to calculate the power (a^b)
void ft_power(int a, int b)
{
    if (b < 0)
    {
        write(1, "Error: Negative exponent\n", 26);
        return;
    }

    // Handle special case: 1^anything = 1
    if (a == 1)
    {
        write(1, "1\n", 2);
        return;
    }

    int result = 1;
    int i = 0;
    while (i < b)
    {
        result *= a;
        i++;
    }

    char str[12];
    int_to_str(result, str);
    write(1, str, sizeof(str));
    write(1, "\n", 1); // Newline after result
}

// Function to calculate the square root of perfect squares
void ft_sqrt(int a)
{
    if (a < 0)
    {
        write(1, "Error: Negative number\n", 23);
        return;
    }

    int sqrt = 0;
    while (sqrt * sqrt < a)
        sqrt++;

    if (sqrt * sqrt == a)
    {
        char str[12];
        int_to_str(sqrt, str);
        write(1, str, sizeof(str));
        write(1, "\n", 1); // Newline after result
    }
    else
        write(1, "Error: Not a perfect square\n", 28);
}

int main(void)
{
    char buffer[12];
    int x, y;
    char operation;

    // Input for the first integer
    write(1, "Enter your 1st integer: ", 25);
    int n = read(0, buffer, 11); // Read up to 11 characters (reserving space for null terminator)
    buffer[n] = '\0'; // Null-terminate the string
    x = str_to_int(buffer); // Convert the input string to an integer

    // Input for the second integer
    write(1, "Enter your 2nd integer: ", 25);
    n = read(0, buffer, 11);
    buffer[n] = '\0';
    y = str_to_int(buffer);

    // Input for the operation
    write(1, "Choose your operation (+, -, *, /, ^, #): ", 42);
    read(0, buffer, 1); // Read the operation (a single character)
    operation = buffer[0]; // Store the operation

    // Perform the chosen operation
    if (operation == '+')
        ft_sum(x, y);
    else if (operation == '-')
        ft_sub(x, y);
    else if (operation == '*')
        ft_mult(x, y);
    else if (operation == '/')
        ft_div(x, y);
    else if (operation == '^')
        ft_power(x, y);
    else if (operation == '#')
        ft_sqrt(x);
    else
        write(1, "Error: Invalid operation!\n", 27);
}