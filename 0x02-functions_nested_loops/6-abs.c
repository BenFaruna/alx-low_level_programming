/**
 * _abs - returns the absolute value of an integer
 *
 * @n: the number to be checked
 *
 * Return: absolute value(|n|)
 */
 int _abs(int n)
{
	int result;
	if (n < 0)
	{
		result = -1 * n;

		return (result);
	}
	else
	{
		result = n;

		return (result);
	}
}
