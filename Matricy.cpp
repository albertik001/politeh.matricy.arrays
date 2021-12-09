#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j, c[6][5], max, mi[6], mj[6], m[6];
	cout << "Vedite matricy c[6][5]" << endl;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << " = ";
			cin >> c[i][j];
		}
	}
	for (i = 0; i < 6; i++)
	{
		max = c[i][0];
		for (j = 0; j < 5; j++)
		{
			if (c[i][j] >= max)
			{
				max = c[i][j];
				m[i] = max;
				mi[i] = i + 1;
				mj[i] = j + 1;
			}
		}
	}
	cout << endl;
	cout << "Matrica :" << endl;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(4) << c[i][j];
		}
		cout << endl;
	}
	cout << endl << "Maksimal'nye elementy:" << endl;
	for (i = 0; i < 6; i++)
	{
		cout << "[" << mi[i] << "]" << "[" << mj[i] << "] = " << m[i] << endl;
	}
	cout << endl;
	for (i = 0; i < 6; i++)
	{
		if (m[i] < 10)
		{
			for (j = 0; j < 5; j++)
			{
				c[i][j] += m[i];
				
			}
		}
		else
		{
			for (j = 0; j < 5; j++)
			{
				c[i][j] *= 2;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << setw(4) << c[i][j];
		}
		cout << endl;
	}
	return 0;
}
