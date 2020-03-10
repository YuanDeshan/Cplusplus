#include <iostream>


class Base
{
public:
	//父类中的虚函数的实现通常都是无意义的,因此将父类中的
	//虚函数改为纯虚函数,省略大括号,后面写=0;
	//当一个类中至少存在一个纯虚函数时,那么这个类称为
	//抽奖类,并且该类不能实例化,其子类必须重写纯虚函数,
	//否则,它的子类也为抽象类
	virtual void Func() = 0;
};

class Drive:public Base
{
public:
	//重写父类中的纯虚函数
	virtual void Func()
	{
		std::cout << "Func()函数调用" << std::endl;
	}
};

void test1()
{
	Base* b = new Drive;
	b->Func();
	delete b;
}
int main()
{
	test1();
	return 0;
}
