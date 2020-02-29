#if 0
#include <iostream>

//常函数
//1.成员函数后面加上const称之为常函数
//2.常函数内不可以修改成员属性
//3.成员属性声明时前面加上mutable后,在常函数中依然可以修改
class Person
{
public:
	void showPerson()const
	{
		this->_B = 18;
		//this->_A = 100;//this指针指向的值不能修改,相当于 const Person * const this
		//this = NULL;//this指针为指针常量,其指针的指向不能被修改
		std::cout << _B << std::endl;
	}
	void func()
	{
		_A = 100;
		std::cout << "测试函数" << std::endl;
	}

	int _A;
	//成员属性前加mutable,在常函数中可以进行修改
	mutable int _B;

};

//常对象
//1.声明对象前加const称为常对象
//2.常对象只能调常函数
void test1()
{
	const Person p;
	p.showPerson();
	//p.func();//不能调用,因为func函数可能会修改成员属性
}
int main()
{
	test1();
	return 0;
}
#endif