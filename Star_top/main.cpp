#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int h = 0;
	cout << "수를 입력하세요 : ";
	cin >> h;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < h - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	int k = 0;
	for (i = 0; i < h; i++)
	{
		for (j = 1; j < h - i; j++)
		{
			cout << " ";
		}
		for (k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= h - i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}