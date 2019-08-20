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

#if 0
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
#endif

class Date
{
public:
	void PrintDate()
	{
		cout << _year <<"-"<< _month <<"-"<< _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};

void Test()
{
	Date s1,s2;
	s1.SetDate(2019, 3, 29);
	s2.SetDate(2019, 9, 24);
	s1.PrintDate();
	s2.PrintDate();
}


int main()
{
	Test();

	return 0;
}