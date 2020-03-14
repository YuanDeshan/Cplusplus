#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->_name = name;
		this->_age = age;
	}

	void ShowPerson()
	{
		cout << "Name: " << this->_name << " " << "Age: " << this->_age << endl;
	}

public:
	NameType _name;
	AgeType _age;
};

void test01()
{
	Person<string, int> p("Tom", 18);
	p.ShowPerson();
}

//类模板和函数模板的区别：
//类模板没有自动推导类型的使用方式
//类模板在参数列表中可以有默认参数
//如： 
	//template <class NameType,class AgeType=int>
//使用时：
	//Person<string> p("Tom", 18);
//int就可以省略不写

//类模板中成员函数的创建时机
//类模板的成员函数只有在调用时才会创建

//类模板对象做函数参数
//1.指定传入类型
void PrintPerson1(Person<string,int>&p)
{
	p.ShowPerson();
}

void test02()
{
	Person<string, int> p("Jack", 19);
	PrintPerson1(p);
}

//2.参数模板化	
template <class T1,class T2>
void PrintPerson2(Person<T1, T2>&p)
{
	p.ShowPerson();
}

void test03()
{
	Person<string, int> p("Sam", 20);
	PrintPerson2(p);
}

//3.整个类模板化
template <class T>
void PrintPerson3(T& p)
{
	p.ShowPerson();
	cout << "T1的类型是：" << typeid(T).name() << endl;
}

void test04()
{
	Person<string, int> p("Kise", 21);
	PrintPerson3(p);
}

int main()
{
	//test01();
	test02();
	test03();
	test04();
	return 0;
}