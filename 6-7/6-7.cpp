#include <iostream>
#include <ctime>

using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767)
	{
		int n = min + (rand() % (max - min + 1));
		return n;
	}
	static char nextAlphabet()
	{
		int n = rand() % 2;
		if (n == 0)
		{
			n = 65 + rand() % 26;
			return n;
		}
		else
		{
			n = 97 + rand() % 26;
			return n;
		}
	}
	static double nextDouble()
	{
		double n = rand() / (double)(RAND_MAX + 1);
		return n;
	}
};

int main()
{
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl;
	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << Random::nextDouble() << ' ';
	}
	cout << endl;
}