/**
* _strlen - returns the length of a string
* main - check the code
* @s: string to evaluate
* Always 0.
* Return: the length of the string
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
