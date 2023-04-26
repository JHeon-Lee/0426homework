#include <stdio.h>

void MaxAndMin(int* ptr1, int* ptr2, int* array);

int main()
{
	int arr[5];
	int a = 1;
	int b = 100000;
	int* maxPtr = &a;
	int* minPtr = &b;
	for (int i = 0; i < 5; i++)
	{
		printf("정수 입력 %d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(maxPtr, minPtr, arr);
	printf("최대 : %d, 최소 : %d\n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(int* ptr1, int* ptr2, int* array)
{
	for (int i = 0; i < 5; i++)
	{
		if (*ptr1 < array[i])
		{
			*ptr1 = array[i];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (*ptr2 > array[i])
		{
			*ptr2 = array[i];
		}
	}
}
