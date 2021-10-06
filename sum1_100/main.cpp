#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int i;

	for (i = 1; i <= 100; i = i + 1)
	{
		sum = sum + i;
	}
	cout << "1~100까지의 합 : " << sum << endl;

	cout << endl;

	int SUM = 0;
	for (int i = 1; i <= 100; i++)
	{
		SUM += i;
	}
	cout << "1~100까지의 합 : " << SUM << endl;

	return 0;
}
