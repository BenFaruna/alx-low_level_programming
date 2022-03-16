/**
 * _islower - check if a char is lower case
 *
 * @c: the character to be checked
 *
 * Return: 1 for true and 0 when false
 */
int _islower(int c)
{
	int result;

	result = (c >=  97 && c <= 122) ? 1 : 0;

	return (result);
}
