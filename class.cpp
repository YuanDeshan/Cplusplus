#include <iostream>
using namespace std;

#if 0
class  Operate
{

public:
	int add(int x, int y)
	{
		return x + y;
	}

private:
	int a;
	int b;
};
#endif

#if 0
class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[5];
	int _age;
};

void Person::PrintPersonInfo()
{
	cout << _name << " " << _gender << " " << _age << endl;
}
#endif

class Person
{
public:
	void PrintPersonInfo()
	{
		cout << _name << " " << _gender << " " << _age << endl;
	}

public:
	char* _name;
	char* _gender;
	int _age;
};

void Test()
{
	Person man;
	man._name = "zhangsan";
	man._age = 30;
	man._gender = "male";
	man.PrintPersonInfo();
}

int main()
{
	Test();

	return 0;
}