#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: number of characters printed
 */
int print_number(int n)
{
    long num = n;
    char c;
    int count = 0;

    if (n < 0)
    {
        count += write(1, "-", 1);
        num = -num;
    }

    if (n / 10)
        count += print_number(n / 10);

    c = (n % 10) + '0';
    count += write(1, &c, 1);

    return (count);
}
