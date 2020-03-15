#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

template <class T1,class T2>
class Person
{
public:
	Person(T1 name,T2 age);
	void ShowPerson();

public:
	T1 _name;
	T2 _age;
};

template <class T1,class T2>
Person<T1, T2>::Person(T1 name,T2 age)
{
	this->_name = name;
	this->_age = age;
}

template <class T1,class T2>
void Person<T1, T2>::ShowPerson()
{
	cout << this->_name << " " << this->_age << endl;
}

void test01()
{
	Person<string, int> p("Tom", 20);
	p.ShowPerson();
}
int main()
{
	test01();
	return 0;
}