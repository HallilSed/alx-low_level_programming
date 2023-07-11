#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @heigth: height input
 * Return: pointer to 2 dim
 */
int **alloc_grid(int width, int heigth)
{
	int **w;
	int a, g;

	if (width <= 0 || heigth <= 0)
		return (NULL);

	w = malloc(sizeof(int *) * heigth);

	if (w == NULL)
		return (NULL);

	for (a = 0; a < heigth; a++)
	{
		w[a] = malloc(sizeof(int) * width);
		if (w[a] == NULL)
		{
			for (; a >= 0; a--)
				free(w[a]);
			free(w);
			return (NULL);
		}
	}
	for (a = 0; a < heigth; a++)
	{
		for (g = 0; g < width; g++)
			w[a][g] = 0;
	}
	return (w);
}
