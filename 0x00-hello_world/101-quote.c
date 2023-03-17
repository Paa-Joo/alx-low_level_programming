#include <unistd.h>

/**
 * main - always required
 *
 * Return: 1 when successful
 */

int main(void)
{
	const char msg[] = "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(msg) - 1;
	write (STDERR_FILENO, msg, len);
	return (1);
}
