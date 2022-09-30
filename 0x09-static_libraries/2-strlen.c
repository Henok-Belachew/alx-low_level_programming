
/**
 * _strlen - returns the length of a string
 * @s: String to count
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
