/**
 * _isalpha - check if a char is an alphabet
 *
 * @c: the character to be checked
 *
 * Return: 1 for true and 0 when false
 */
 int _isalpha(int c)
{
	int result;

	result = (c >= 65 && c <= 117) ? 1 : 0;

	return (result);
}
