// � �ڿ��� n�� �ִٸ� n�� 2n���̿��� �ݵ�� �Ҽ��� 1���̻������Ѵ�.
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{	
	int ary[100000] = { 0, };
	int inputcount = 0;
	while (1)
	{
		int number;
		cin >> number;
		int count = 0;
		int sosucount = 0;

		if (number == 0)
			break;

		for (int i = number+1; i <= 2 * number; i++)
		{
			if (i == 1)
				continue;
			for (int j = 1; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					count++;
				}
				if (count >= 2)
				{
					break;
				}
			}
			if (count == 1)
			{
				sosucount++;
			}
			count = 0;
		}
		ary[inputcount] = sosucount;
		inputcount++;
	}
	printf("\n");
	for (int i = 0; i < inputcount; i++)
	{
		printf("%d\n", ary[i]);
	}
}