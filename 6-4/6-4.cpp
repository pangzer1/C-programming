#include <iostream>
using namespace std;

class MyVector
{
private:
	int *mem;
	int size;
public:
	MyVector(int n = 100, int val = 0)
	{
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++)
		{
			mem[i] = val;
		}
	}
	~MyVector() { delete [] mem; }
};

int main()
{
	MyVector *vec1, *vec2;
	vec1 = new MyVector();
	vec2 = new MyVector(40, 40);
	delete vec1, vec2;
}