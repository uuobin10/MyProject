// �Ҽ�ã�� 100���� N���� 1000���� ������ �Է¹ް� �Ҽ��� ����� ����Ѵ�.
#include <iostream>
using namespace std;

int main(void)
{
	int number;
	cin >> number;
	int *ary;
	ary = new int(number);
	int sosucount = 0;
	int count = 0;

	for (int i = 0; i < number; i++)
	{
		cin >> ary[i];
	}

	for (int i = 0; i < number; i++)
	{
		for (int j = 1; j <= ary[i] / 2; j++)
		{
			if (ary[i] % j == 0)
			{
				count++;
			}
		}
		printf("ary : %d, count : %d\n", ary[i], count);
		if (count == 1)
		{
			sosucount++;
		}
		count = 0;
	}
	printf("%d\n", count);
}