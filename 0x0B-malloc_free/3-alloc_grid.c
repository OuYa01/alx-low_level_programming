#include <stdlib.h>
/**
 * alloc_grid -  function that returns a
 * pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: Null if not enough memory is available
 * or p if scc
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
