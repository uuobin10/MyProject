#include <iostream>
using namespace std;

#define max 10000

//첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.
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