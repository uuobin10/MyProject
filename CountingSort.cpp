#include <iostream>
using namespace std;

#define max 10000

//ù° �ٿ� ���� ���� N(1 �� N �� 10,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. �� ���� 10,000���� �۰ų� ���� �ڿ����̴�.
int main(void)
{
	int array[max];
	int number;
	cin >> number;

	for (int i = 0; i < max; i++)
	{
		array[i] = 0;
	} // initialization

	for (int i = 0; i < number; i++)
	{
		int temp;
		cin >> temp;
		array[temp]++;
	}

	for (int i = 0; i < max; i++)
	{
		while (array[i] != 0)
		{
			printf("%d\n", i);
			array[i]--;
		}	
	}
}