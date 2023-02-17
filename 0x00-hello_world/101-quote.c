#include <stdio.h>
#include <unistd.h>
/**
 * main - program that prints an exact line to the standatrd error.
 * Return: 1 will be (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
