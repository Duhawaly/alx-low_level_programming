#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
        printf("with proper grammar, but the outcome is a piece of art,\n");
        return (0);
}



6-size.c
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
        printf("Size of a char: %lu byte(s)\n", sizeof(char));
        printf("Size of an int: %lu byte(s)\n", sizeof(int));
        printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %lu byte(s)\n", sizeof(float));
        return (0);
}
