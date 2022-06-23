/**
 * _pow_recursion - Return number to the power y
 *
 * @x: Number for computation
 * @y: Power
 *
 * Return: Returns void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
