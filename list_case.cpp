#include <iostream>
#include <list>
#include <string>
using std::cout;
using std::endl;
using std::list;
using std::string;

//���������������,���������ͬ,����߽���
class Person
{
public:
	Person(string name, int age,int height)
	{
		this->_name = name;
		this->_age = age;
		this->_height = height;
	}

public:
	string _name;
	int _age;
	int _height;
};

void PrintPerson(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); ++it)
	{
		cout << "name: " << it->_name<<"    " << "age: " << it->_age<<"  ";
		cout<<"heigh: "<< it->_height << endl;
	}
}

bool ComparePerson(Person& p1, Person& p2)
{
	if (p1._age == p2._age)
	{
		return p1._height > p2._height;
	}
	else
	{
	return p1._age < p2._age;
	}
}

void test01()
{
	list<Person> L;
	Person p1("��ɮ", 20, 165);
	Person p2("�����", 600, 170);
	Person p3("������", 550, 160);
	Person p4("ɳ��", 500, 175);
	Person p5("С����", 500, 180);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	PrintPerson(L);

	//����
	//��Ҫָ���������
	cout << "=================" << endl;
	L.sort(ComparePerson);
	PrintPerson(L);
}

int main()
{
	test01();
	return 0;
}