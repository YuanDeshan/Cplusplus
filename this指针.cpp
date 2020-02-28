#include <iostream>

class Person
{
public:
	Person(int age)
	{
		//1.形参和成员变量名相同时,this指针区别
		//this指向被调用的成员函数所属的对象
		this->age = age;
	}
	//2.返回对象本身用*this
	//返回值用&是为了返回p2调用的后的值
	Person& Addage(Person &p)
	{
		this->age += p.age;
		return *this;
	}

	int age;
};
void test1()
{
	Person p(18);
	std::cout << p.age << std::endl;
}

void test2()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.Addage(p1).Addage(p1).Addage(p1);
	std::cout << p2.age << std::endl;
}


int main()
{
	//test1();
	test2();
	return 0;
}