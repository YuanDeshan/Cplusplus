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

#if 0
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
#endif


class Date
{
public:
	//无参构造函数
	Date()
	{}

	//带参构造函数
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//全缺省构造函数
	Date(int year = 2019, int month = 8, int day = 1)
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

#if 0
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String1()" << endl;
		free(_str);
	}
private:
	char* _str;
};

class Person
{
public:
	String _name;
	int _age;
};
int main()
{
	Person p;
	return 0;
}
#endif

#if 0
class Date
{
public:
	Date()
	{
		_year = 2019;
		_month = 5;
		_day = 20;
		cout << "Date1" << endl;
	}
	//默认拷贝构造函数
	//1.参数只有一个，用const修饰
	//2.必须传引用
	//3.类型：已有类类型
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date2" << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

void Test()
{
	Date d;
	//拷贝构造
	Date D(d);


}
int main()
{
	Test();
	return 0;
}
#endif

#if 0
class  Date
{
public:
	Date()
	{
		_year = 2019;
		_month = 3;
		_day = 29;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d;
	//D会自动调用编译器默认生成的拷贝构造函数
	Date D(d);
	return 0;
}
#endif

class Date{
public:

	Date(int year=2019,int month=1,int day=1)
	{
		_year = year;
		_month = month;
		_day = day;
	}



	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}

private:
	int _year;
	int _month;
	int _day;

};
 
int main(){

	Date d(2019,3,29);
	Date D;
	D = d;
	return 0;
}