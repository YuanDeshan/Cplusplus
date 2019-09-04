#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	Person()
		:_name("peter")
		, _age(18)
		, _gender("ÄÐ")
	{}
	void Print()
	{
		cout << _name << " " << _age <<" "<<_gender << endl;
	}
protected:
	string _name;
	int _age;
	string _gender;
};

class Student:public Person
{
public:
	Student()
		:_id(2019)
	{}
	void Print()
	{
		cout << _name << " " << _age <<" "<<_gender << endl;
		cout << _id << endl;
	}
private:
	int _id;
};

int main()
{
	Person p;
	Student s;
	p.Print();
	s.Print();
	return 0;
}