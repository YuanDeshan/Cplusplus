#include <iostream>
#include <string>

class Phone
{
public:
	Phone(std::string PName):_PName(PName)
	{
		std::cout << "Phone的构造函数" << std::endl;
	}
	std::string _PName;
	~Phone()
	{
		std::cout << "Phone的析构函数" << std::endl;
	}
};

class Person
{
public:
	Person(std::string name,std::string mphone):_Name(name),_mphone(mphone)
	{
		std::cout << "Person的构造函数" << std::endl;
	}
	std::string _Name;
	Phone _mphone;
	~Person()
	{
		std::cout << "Person的析构函数" << std::endl;
	}
};
//对象作为类成员时,
//构造时先构造类对象,再构造自身
//析构时先析构自身,再析构类对象
int main()
{

	Person p("小明", "nova6");
	return 0;
}