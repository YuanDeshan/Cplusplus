#include <iostream>
using std::cout;
using std::endl;

//类模板与继承
//1.当子类继承的父类是一个类模板时，子类在声明的时候，需要指定父类中T的类型
template <class T>
class Base
{
public:
	T _a;

};

//class Drive1:public Base
class Drive1:public Base<int>
{
	
};
//2.如果不指定，编译器无法给予子类分配内存
//3.如果想灵活指出父类中T的类型，子类也需变为类模板
template <class T1,class T2>
class Drive2 :public Base<T1>
{
public:
	Drive2()
	{
	cout << "T1的类型是： " << typeid(T1).name() << endl;
	cout << "T2的类型是： " << typeid(T2).name() << endl;
	}
	T2 _b;
};
void test01()
{
	Drive2<char, int> d;
}

int main()
{
	test01();
	return 0;
}