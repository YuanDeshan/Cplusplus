#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->_name = name;
		this->_age = age;
	}

	void ShowPerson()
	{
		cout << "Name: " << this->_name << " " << "Age: " << this->_age << endl;
	}

public:
	NameType _name;
	AgeType _age;
};

void test01()
{
	Person<string, int> p("Tom", 18);
	p.ShowPerson();
}

int main()
{
	test01();
	return 0;
}