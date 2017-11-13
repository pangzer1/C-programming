#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(int id = 1, string name = "Grace", double weight = 20.5)
	{
		this->id = id;
		this->name = name;
		this->weight = weight;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
private:
	int id;
	double weight;
	string name;
};


int main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}