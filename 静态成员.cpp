#include <iostream>
#include <string>

class Person
{
public:

	//静态成员函数也是有访问权限的
	static void func()
	{
		//静态成员函数可以访问静态成员变量
		country= "japan";
		//不能访问非静态成员变量,因为该函数不能
		//识别非静态成员变量到底是哪一个对象的属性
		//name = "张三";
	}
	//静态成员变量类内声明,类外初始化
	static std::string country;
	std::string name;
	//静态成员变量也是有访问权限的,当权限为private时,类外是不可访问的
//private:
//	static std::string country;

};
//类外初始化
std::string Person::country = "china";


//访问方式
void test()
{
	//静态成员变量不属于某个对象,所有对象都共享同一份数据
	//因此静态成员变量的访问方式有2中:
	//1.通过创建对象访问

	//2.同过类名访问
	std::cout << Person::country << std::endl;
}
int main()
{

	Person p;
	std::cout << p.country << std::endl;

	Person p1;
	p1.country = "japan";
	std::cout << p.country << std::endl;

	return 0;
}