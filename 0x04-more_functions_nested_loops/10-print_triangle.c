/**
 * print_triangle - A function that print a triangle of a specific size.
 *
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
		break;
	}
	for (row = 0; row < size; row++)
	{
		for (spaces = row; spaces < size - 1; spaces++)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
