/**
 * _memcpy - copies 'n' bytes from memory area 'src' to memory area 'dest'
 *
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of char to copy
 *
 * Return: pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}

	return (dest);
}
