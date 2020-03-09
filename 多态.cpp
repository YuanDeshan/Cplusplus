#include <iostream>

//多态分类
//1.静态多态:函数重载和运算符重载,复用函数名
//2.动态多态:派生类和虚函数实现运行时多态

//静态多态和动态多态的区别:
//1.静态多态函数地址早绑定--编译阶段确定函数地址--静态联编
//2.动态多态函数地址晚绑定--运行阶段确定函数地址--动态联编


class Animals
{
public:
	//在函数前加上virtual关键字,那么该函数称为虚函数
	virtual void Speak()
	{
		std::cout << "动物在说话" << std::endl;
	}
};

class Cat:public Animals
{
public:
	void Speak()
	{
		std::cout << "猫叫" << std::endl;
	}
};

class Dog:public Animals
{
public:
	void Speak()
	{
		std::cout << "狗叫" << std::endl;
	}
};

void doSpeak(Animals &animals)
{
	animals.Speak();
}

//之所以无论传入什么对象,结果都是动物叫
//是因为在编译阶段,相应函数地址已经绑定
//一直掉的是animal.speak()

//如果希望传入什么对象,就调用什么对象的函数
//需要实现动态多态

//多态满足条件
//1.有继承关系
//2.派生类必须重写基类中的虚函数
void test()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}
int main()
{
	test();
	return 0;
}