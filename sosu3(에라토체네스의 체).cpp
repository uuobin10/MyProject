#include <iostream>
using namespace std;
// M,N ������ �Ҽ��� ��� �������.
int main(void)
{
	int M, N;
	scanf("%d %d", &M, &N);

	//�����伣���� ü ��� = �Ҽ��� ����� �� üũ��. �������� �Ҽ���.
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
