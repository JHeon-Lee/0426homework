#include <stdio.h>

void MaxAndMin(int** ptr1, int** ptr2, int* array);

int main()
{
	int arr[5];
	int* maxPtr = 0;
	int* minPtr = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("정수 입력 %d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr);
	printf("최대 : %d, 최소 : %d\n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(int** ptr1, int** ptr2, int* array)
{
	int* m = 0;
	int* n = 0;
	m = array;
	n = array;

	for (int i = 0; i < 5; i++)
	{
		if (*m < array[i])
		{
			m = &array[i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (*n > array[i])
		{
			n = &array[i];
		}
	}
	*ptr1 = m;
	*ptr2 = n;
}
