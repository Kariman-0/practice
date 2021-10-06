#include <iostream>

using namespace std;

int main()
{
	int even = 0;
	int i;

	for (i = 0; i <= 100; i = i + 2)
	{
		even = even + i;
	}
	cout << "1~100에서 짝수의 합 : " << even << endl;

	cout << endl;

	int EVEN = 0;

	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			EVEN += i;
		}
	}
	cout << "1~100에서 짝수의 합 : " << EVEN << endl;

	return 0;
}