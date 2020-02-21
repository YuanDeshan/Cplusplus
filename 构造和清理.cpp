#include <iostream>

#if 0
class Person
{
public:
	//构造函数
	//1.函数名与类名相同,无返回值
	//2.有无参数都可,可发生重载
	//3.创建对象时,由编译器自动调用,且只调用一次
	Person()
	{
		std::cout << "构造函数" << std::endl;
	}

	//析构函数
	//1.函数名与类名相同,且前面有~
	//2.没有参数,不可发生重载
	//3.对象在销毁前,由编译器自动调用,且只调用一次
	~Person()
	{
		std::cout << "析构函数" << std::endl;
	}
private:
	int age;
};

void test()
{
	Person p;
}
#endif

//构造函数分类
//1.按参数分为:无参构造和有参构造
//2.按类型分:分为普通构造(默认构造函数)和拷贝构造函数
class Person
{
public:
	Person()
	{
		std::cout << "无参构造函数" << std::endl;
	}
	Person(int a)
	{
		_age = a;
		std::cout << "有参构造函数" << std::endl;
	}
	Person(const Person &p)
	{
		_age = p._age;
		std::cout << "拷贝构造函数" << std::endl;

	}

private:
	int _age;
};
//无参构造函数测试
void test0()
{
	Person p;
}
//有参构造函数测试
void test1()
{
	Person p(10);
}
//拷贝构造函数测试
void test2()
{
	Person p(20);
	Person p1(p);
}
//调用方法
void test3()
{
	//1.括号法
	//Person p;//默认构造
	//Person p1(10);//有参构造
	//Person p2(p1);//拷贝构造

	//2.显示法
	//Person p;//默认构造
	//Person p1 = Person(10);//有参构造
	////Person(10);
	////称为匿名对象,当前行执行结束后,系统会立即回收掉匿名对象
	//Person p2 = Person(p1);//拷贝构造

	//3.隐式转换法
	Person p;
	Person p1 = 10;//相当于Person p1=Person(10);  有参构造
	Person p2 = p;//相当于Person p2=Person(p);  拷贝构造
}
int main()
{

	//test();
	//test0();
	//test1();
	//test2();
	test3();
	return 0;
}
