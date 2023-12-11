#include "search_algos.h"
/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	size_t saut = jump;

	for (i = saut = 0; saut < size && array[saut] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", saut, array[saut]);
		i = saut;
		saut += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, saut);

	saut = saut < size - 1 ? saut : size - 1;
	for (; i < saut && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

int main(void)
{
	int array[] = {
			0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);


	printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
	printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));

	return (EXIT_SUCCESS);
}
