#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>

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
#endif

#if 0
class Date
{
public:
	//�޲ι��캯��
	Date()
	{}

	//���ι��캯��
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//ȫȱʡ���캯��
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
#endif

#if 0
typedef int SLDatatype;


class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		_pdata = (SLDatatype*)malloc(sizeof(SLDatatype)*capacity);
		assert(_pdata);
		_size = 0;
		_capacity = capacity;
	}
	~SeqList()
	{
		if (_pdata)
		{
			free(_pdata);
			_pdata = NULL;
			_size = 0;
			_capacity = 0;
		}
	}

private:
	int* _pdata;
	int _capacity;
	int _size;
};
#endif

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
	//Ĭ�Ͽ������캯��
	//1.����ֻ��һ������const����
	//2.���봫����
	//3.���ͣ�����������
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
	//��������
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
	//D���Զ����ñ�����Ĭ�����ɵĿ������캯��
	Date D(d);
	return 0;
}
#endif

#if 0
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
#endif

#if 0
class Date
{
public:
	Date()
	{
		_year = 2019;
		_month = 3;
		_day = 28;
	}
	void PrintDate()const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	int Add();
private:
	int _year;
	int _month;
	int _day;
};

int Date::Add()
{
	_day += 1;
	PrintDate();
	return _day;
}

int main()
{
	Date d;
	d.PrintDate();
	d.Add();

	return 0;
}
#endif

#if 0
class Date
{
public:
	Date* operator&()
	{
		return this;
	}
	const Date* operator&()const
	{
		return this;
	}
private:
	int _year;
	int _month;
	int _day;
};
#endif

#if 0
class Date
{
public:
	Date(int year = 2019, int month = 3, int day = 29)
		:_year(year)
		, _month(month)
		, _day(day)	
	{}

	void PrintDate()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d;
	d.PrintDate();
	return 0;
}
#endif

#if 0
class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};
class A
{
public:
	void Print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	// �Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ��
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};
int A::n = 10;

int main()
{
	A a;
	a.Print();
	return 0;
}
#endif

#if 0
void Fun()
{
	int* ptr1 = new int;
	int* ptr2 = new int(5);
	int* ptr3 = new int[5];

	delete ptr1;
	delete ptr2;
	delete[] ptr3;

}
#endif

#if 0
template<class T>
T Add(const T& a,const T& b)
{
	return a + b;
}

int main()
{	
	int a = 10;
	int b = 20.0;
	cout << Add<int>(a, b) << endl;
	return 0;
}
#endif


template<class T>
class Vector
{
public:
	Vector(int capacity = 10)
		:_array(new T[capacity])
		, _size(0);
		, _capacity(capacity)
	{}
	~Vector();
	void PushBack(const T& data);
	void PopBack();
	//...
	int GetSize();

private:
	T* _array;
	int _size;
	int _capacity;
};

template<class T>
Vector<T>::~Vector()
{
	if (_array)
	{
		delete[] _array;
		_size = _capacity = 0;
	}
}


