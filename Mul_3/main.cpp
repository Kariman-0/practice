#include <iostream>

using namespace std;

int main()
{
	int mul = 0;
	int i;

	for (i = 0; i <= 100; i = i + 3)
	{
		mul = mul + i;
	}
	cout << "1~100 ������ 3�� ����� �� : " << mul << endl;

	cout << endl;

	int MUL = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			MUL = MUL + i;
		}
	}
	cout << "1~100 ������ 3�� ����� �� : " << mul << endl;

	return 0;
}