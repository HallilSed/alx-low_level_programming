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
	int all, gri;

	if (width <= 0 || heigth <= 0)
		return (NULL);

	w = malloc(sizeof(int *) * heigth);

	if (w == NULL)
		return (NULL);

	for (all = 0; all < heigth; all++)
	{
		w[all] = malloc(sizeof(int) * width);
		if (w[all] == NULL)
		{
			for (; all >= 0; all--)
				free(w[all]);
			free(w);
			return (NULL);
		}
	}
	for (all = 0; all < heigth; all++)
	{
		for (gri = 0; gri < width; width++)
			w[all][gri] = 0;
	}
	return (w);
}
