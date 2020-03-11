#include <iostream>
#include <string>

//虚析构
//如果子类中有属性开辟在堆区,父类指针在释放时无法调用到子类的析构代码
//解决方法:虚析构和纯虚析构

class Animals
{
public:
	Animals()
	{
		std::cout << "Animals的构造函数" << std::endl;
	}
	virtual void Speak() = 0;

	//虚析构
	//需要代码实现
	//virtual ~Animals()
	//{
	//	std::cout << "Animals的析构函数" << std::endl;
	//}

	//纯虚析构
	//纯虚析构需要代码实现
	virtual ~Animals() = 0;
};

Animals::~Animals()
{
	std::cout << "Animals的析构函数" << std::endl;
}

class Cat:public Animals
{
public:

	Cat(std::string name)
	{
		_name = new std::string(name);
		std::cout << "Cat的构造函数" << std::endl;
	}
	void Speak()
	{
		std::cout << "猫叫" << std::endl;
	}

	std::string* _name;

	~Cat()
	{
		if (_name != NULL)
		{
			delete _name;
			_name = NULL;
		}
		std::cout << "Cat析构函数" << std::endl;
	}
};

void test01()
{
	Animals* pa = new Cat("jack");
	pa->Speak();
	delete pa;
}
int main()
{
	test01();
	return 0;
}