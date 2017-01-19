#include <iostream>
using namespace std;

int Partition(int *ary, int l, int r)
{
	int pivot, change;
	pivot = ary[r];
	change = l;
	int temp;

	for (int i = l; i < r; i++)
	{
		if (ary[i] <= pivot)
		{
			temp = ary[i];
			ary[i] = ary[change];
			ary[change] = temp;
			change++;
		}
	}
	ary[r] = ary[change];
	ary[change] = pivot;

	return change;
}

void Quicksort(int *ary, int left, int right)
{
	if (left < right)
	{
		int position;
		position = Partition(ary, left, right - 1);
		Quicksort(ary, left, position);
		Quicksort(ary, position + 1, right);
	}
}

void printarray(int *ary, int number)
{
	for (int i = 0; i < number; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
}
//quick sort¸¦ ÇØº¾½Ã´Ù.
int main(void)
{
	int number;
	cin >> number;
	int *ary;
	ary = new int[number];

	for (int i = 0; i < number; i++)
	{
		cin >> ary[i];
	}
	printarray(ary, number);
	Quicksort(ary, 0, number);
	printarray(ary, number);
}