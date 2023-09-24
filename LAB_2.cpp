
#include <math.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	double x,y;

	cout << "Введите x , y ";
	cin >> x >> y;

	if ((( - 1 * x) + 1 <= y) && (x>=0) && (y>=0))
	{
		cout << "Yes";
	}
	else if (((-1 * x) - 1 >= y))
	{
		if ((y <= -1 && x >= 0) || (x <=-1 && y>=0))
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
	else
	{
		cout << "No";
	}

}


