#include "search_algos.h"
/**
  * binary_search_high - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @low: The starting index of the [sub]array to search.
  * @high: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL
  */

int binary_search_high(int *array, size_t low, size_t high, int value)
{
	int mid = 0;
	size_t i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (low + high) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}
/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (binary_search_high(array, i / 2, right, value));


}
