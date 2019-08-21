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

#if 0
#include <iostream>
using namespace std;

int findNumberOf1(int num){
	int arr[1024];
	int count = 0, i;
	for (i = 0;num/2==0; ++i){
		arr[i] = num % 2;
		if (arr[i] == 1)
			++count;
	}
	
	return count;
}

int main(){
	int num;
	cin >> num;
	cout << findNumberOf1(num) << endl;
	return 0;
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