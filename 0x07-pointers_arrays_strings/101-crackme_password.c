#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * check_password - checks if a password matches the expected password
 * @password: the password to check
 *
 * Return: 1 if the password matches, 0 otherwise
 */
int check_password(char *password)
{
	return strcmp(password, "abc123") == 0;
}
