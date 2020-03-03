#include <iostream>

//1.+号运算符重载
#if 0
class Person
{
public:

	//方式一:成员函数重载
	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp._A = this->_A + p._A;
	//	temp._B = this->_B + p._B;
	//	return temp;
	//}

public:
	int _A;
	int _B;
};

//方式二:全局函数重载
Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp._A = p1._A + p2._A;
	temp._B = p1._B + p2._B;
	return temp;
}
void test1()
{
	Person p1;
	p1._A = 10;
	p1._B = 20;

	Person p2;
	p2._A = 10;
	p2._B = 20;

	//成员函数运算符重载的本质调用
	//Person p3=p1.operator+(p2);
	Person p3 = p1 + p2;
	std::cout << p3._A << std::endl;
	std::cout << p3._B << std::endl;
}
#endif

#if 0
//2.重载<<运算符
class Person
{
	friend std::ostream& operator<<(std::ostream &cout, Person &p);
public:
	Person(int a, int b)
	{
		_A = a;
		_B = b;
	}
	//利用成员函数重载<<运算符
	//p.operator<<(cout) 简化版本 p<<cout
	//不会利用成员函数重载<<,因为无法实现cout在左侧
	/*void operator<<(cout)
	{

	}*/
private:
	int _A;
	int _B;
};
//利用全局函数重载<<
//ostream对象只有一个,所以用引用
std::ostream& operator<<(std::ostream &cout, Person &p)
{
	cout << p._A << " " << p._B;
	//返回cout便于后续输出
	return cout;
}

void test2()
{
	Person p(10, 20);
	std::cout << p << std::endl;
}
#endif

#if 1
//3.++运算符重载
class MyInt
{
public:
	MyInt()
	{
		_A = 0;
	}
	//前置++重载
	//返回引用是为了让一个数据进行递增
	MyInt& operator++()
	{
		++_A;
		return *this;
	}

	//后置++重载
	MyInt operator++(int)//int 作为占位参数
	{
		MyInt Temp=*this;
		_A++;
		return Temp;
	}

public:
	int _A;
};

//<<重载
std::ostream& operator<<(std::ostream &cout, MyInt &p)
{
	std::cout << p._A;
	return cout;
}

void test3()
{
	MyInt M;
	std::cout << M << std::endl;
	std::cout << ++M << std::endl;
	std::cout << M << std::endl;

}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}
#endif