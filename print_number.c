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

    if (num < 0)
    {
        count += write(1, "-", 1);
        num = -num;
    }

    if (num / 10)
        count += print_number(n / 10);

    c = (num % 10) + '0';
    count += write(1, &c, 1);

    return (count);
}
