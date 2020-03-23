#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::string;

void MyPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//��������
	//��һ�ַ�ʽ��
	//vector<int>::iterator itbegin = v.begin();//ָ���һ��Ԫ��
	//vector<int>::iterator itend = v.end();//ָ�����һ��Ԫ�ص���һ��λ��
	//while (itbegin != itend)
	//{
	//	cout << *itbegin << endl;
	//	++itbegin;
	//}

	//�ڶ��ַ�ʽ��
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}*/

	//�����ַ�ʽ
	for_each(v.begin(), v.end(), MyPrint);

}

class Person
{
public:
	Person(string name, int age)
	{
		this->_name = name;
		this->_age = age;
	}
public:
	string _name;
	int _age;
};

void test02()
{
	vector<Person> v;
	Person p1("Tom",18);
	Person p2("Jack",19);
	Person p3("Lisa",20);
	Person p4("Sue",21);
	Person p5("Halen",17);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); ++it)
	{
		//cout << "Name: " << " " << (*it)._name << "Age: " << " " << (*it)._age << endl;
		cout << "Name: " << " " << it->_name << "Age: " << " " << it->_age << endl;
	}

}

void test03()
{
	vector<Person*> v;
	Person p1("Tom",18);
	Person p2("Jack",19);
	Person p3("Lisa",20);
	Person p4("Sue",21);
	Person p5("Halen",17);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << "Name: " << " " << (*it)->_name << "Age: " << " " << (*it)->_age << endl;
	}

}

//����Ƕ������
void test04()
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i=0; i < 4; ++i)
	{
		v1.push_back(i);
		v2.push_back(i+1);
		v3.push_back(i+2);
		v4.push_back(i+3);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); ++it)
	{
		//(*it) Ϊvector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); ++vit)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
}


int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}