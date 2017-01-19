//자연수 M,N이 주어질 때 두 수의 사이의 값들중 소수들의 합과 최수값을 구하라.

#include <iostream>
using namespace std;

int main(void)
{
	int M, N;
	cin >> M;
	cin >> N;

	int sum = 0;
	int count = 0;
	int min = N;

	for (int i = M; i <= N; i++)
	{
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		printf("i : %d, count : %d\n", i, count);
		if (count == 1)
		{
			sum = sum + i;
			if (min >= i)
			{
				min = i;
			}
		}
		count = 0;
	}
	if (sum == 0)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}

}