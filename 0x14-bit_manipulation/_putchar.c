#include "main.h"
#include <unistd.h> /* Include the header for the write function */

/* Function prototype for _putchar */
int _putchar(char c);

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
    if (n >> 0)
    {
        if (n >> 1)
            print_binary(n >> 1);
        _putchar((n & 1) + '0');
    }
    else
    {
        _putchar('0');
    }
}

int main(void)
{
    unsigned long int num = 42; /* Replace 42 with your desired number */
    print_binary(num);
    _putchar('\n');
    return (0);
}

/* _putchar implementation is typically provided in another file or library */
int _putchar(char c)
{
    return write(1, &c, 1); /* Assuming file descriptor 1 (stdout) */
}
