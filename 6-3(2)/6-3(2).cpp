#include <iostream>

using namespace std;

int big(int a=0, int b=0, int c=0)
{
	int big;
	if (a > b)
	{
		big = a;
	}
	else
	{
		big = b;
	}
	if (c == 0)
	{
		if (big > 100)
			big = 100;
		else
			big = big;
		return big;
	}
	else
	{
		if (big > c)
			big = c;
		else
			big = big;
		return big;
	}
}

int main()
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}