#include <unistd.h>

// Function to convert a string to an integer
int str_to_int(char *str)
{
    int num = 0;
    int sign = 1;

    // Handle optional sign
    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    // Convert each character to integer
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        str++;
    }

    return (num * sign);
}

// Function to convert an integer to a string
void int_to_str(int num, char *str)
{
    int i = 0;
    int j;
    int temp;
    int sign = num;

    // Handle zero explicitly
    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    // Handle negative numbers
    if (num < 0)
    {
        num = -num;
        str[i++] = '-';
    }

    // Convert number to string in reverse order
    while (num > 0)
    {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    str[i] = '\0';

    // Reverse the string to get the correct order
    if (sign < 0)
        j = 1; // Skip the negative sign
    else
        j = 0;
    
    for (int k = j; k < i / 2 + j; k++)
    {
        temp = str[k];
        str[k] = str[i - k + j - 1];
        str[i - k + j - 1] = temp;
    }
}

// Function to write a string to stdout
void write_str(const char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char *argv[])
{
    char buffer[12];
    int smallest;
    int largest;
    int current_number;

    // Check if there are at least two arguments (the program name and at least one number)
    if (argc < 2)
    {
        write_str("Usage: ");
        write_str(argv[0]);
        write_str(" <num1> <num2> ... <numN>\n");
        return 1;
    }

	// Initialize smallest and largest with the first argument
	smallest = str_to_int(argv[1]);
	largest = smallest;
    
    // Start from the second argument
    int i = 2;
    while (i < argc)
    {
        current_number = str_to_int(argv[i]);

        // Update smallest and largest values
        if (current_number < smallest)
            smallest = current_number;
        if (current_number > largest)
            largest = current_number;
        i++;
    }

    // Print the results
    write_str("Smallest number: ");
    int_to_str(smallest, buffer);
    write_str(buffer);
    write_str("\n");

    write_str("Largest number: ");
    int_to_str(largest, buffer);
    write_str(buffer);
    write_str("\n");

    return 0;
}
