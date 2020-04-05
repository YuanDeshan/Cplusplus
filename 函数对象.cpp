#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

//本质:函数对象(仿函数)是一个类,不是一个函数
//特点:
//1.函数对象在使用时可以像普通函数那样调用,可以有参数和返回值
//2.函数对象超出普通函数的概念,函数对象可以有自己的状态
//3.函数对象可以作为参数传递

class Myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	Myadd add;
	cout << add(10, 20) << endl;
	
}

class MyPrint
{
public:
	MyPrint()
	{
		this->_count = 0;
	}
	void operator()(string str)
	{
		cout << str << endl;
		this->_count++;
	}

	int _count;
};

void test02()
{
	MyPrint Print;
	Print("hehe");
	Print("hehe");
	Print("hehe");
	cout << Print._count << endl;
}

void DoPrint(MyPrint& m, string str)
{
	m(str);
}

void test03()
{
	MyPrint Print;
	DoPrint(Print, "hehe");
}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}