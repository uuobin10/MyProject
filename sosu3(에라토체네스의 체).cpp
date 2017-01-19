#include <iostream>
using namespace std;
// M,N 사이의 소수를 모두 출력하자.
int main(void)
{
	int M, N;
	scanf("%d %d", &M, &N);

	//에라토샬라링의 체 방법 = 소수의 배수를 다 체크함. 남은놈이 소수다.
	int *ary;
	ary = new int[N + 1];

	for (int i = 0; i <= N; i++)
	{
		if (i == 0 || i == 1)
		{
			ary[i] = 1;
			continue;
		}
		ary[i] = 0;
	}

	for (int a = 2; a <= N; a++)
	{
		if (ary[a] == 0)
		{
			for (int b = a * 2; b <= N; b = b + a)
			{
				ary[b] = 1;
			}
		}
	}
	for (int i = M; i <= N; i++)
	{
		if (ary[i] == 0)
		{
			printf("%d\n", i);
		}
	}
}
