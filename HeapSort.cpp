#include <iostream>
using namespace std;
#define max(a,b) a>b ? a : b

void printheap(long long *ary, long long number)
{
	for (int i = 1; i <= number; i++)
	{
		printf("%lld ", ary[i]);
	}
	printf("\n");
}

void makeheap(long long *ary, long long number)
{
	for (int i = number / 2; i > 0; i--)
	{
		int j = i;
		while ((j <= number / 2))
		{
			if (ary[j] <= ary[j * 2]|| (ary[j] <= ary[j * 2 + 1] && j*2+1 != number+1))
			{
				int temp;
				if (ary[j * 2] > ary[j * 2 + 1] || j*2+1 == number+1)
				{
					temp = ary[j * 2];
					ary[j * 2] = ary[j];
					ary[j] = temp;
					j = 2 * j;
				}
				else
				{
					temp = ary[j * 2 + 1];
					ary[j * 2 + 1] = ary[j];
					ary[j] = temp;
					j = 2 * j + 1;
				}
			}
			else
			{
				break;
			}
		}
	}
}

void heapsort(long long *ary, long long number)
{
	int temp;
	for (int i = number; i > 1; i--)
	{
		temp = ary[i];
		ary[i] = ary[1];
		ary[1] = temp;
		makeheap(ary, i - 1);
	}
	
}
int main(void)
{
	//heapsort를 해볼까요.
	long long number;
	cin >> number;
	long long *ary;
	ary = new long long[number+1];

	for (int i = 1; i < number+1; i++)
	{
		cin >> ary[i];
	}
	makeheap(ary,number);
	heapsort(ary, number);
	printheap(ary, number);
}