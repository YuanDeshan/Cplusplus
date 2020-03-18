#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();

	T1 _name;
	T2 _age;
};

template <class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->_name = name;
	this->_age = age;
}

template <class T1,class T2>
void Person<T1, T2>::showPerson()
{
	cout << this->_name << "  " << this->_age << endl;
}