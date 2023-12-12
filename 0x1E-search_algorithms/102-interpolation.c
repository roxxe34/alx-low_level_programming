#include "search_algos.h"
/**
  * interpolation_search - Searches for a value in an array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for in array
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;


	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low)
				/ (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		} else if (array[pos] < value)
		{
			low = pos + 1;
		} else
		{
			high = pos - 1;
		}
	}
	pos = low + (((double)(high - low)
	                     / (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
int main(void)
{
	int array[] = {
			0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
	printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));
	return (EXIT_SUCCESS);
}