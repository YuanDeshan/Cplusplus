#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::vector;

class Person
{
public:
	Person(string name, int age)
	{
		this->_name = name;
		this->_age = age;
	}

	bool operator==(const Person& p)
	{
		if (this->_name == p._name&&this->_age == p._age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
public:
	string _name;
	int _age;
};

//find
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find(v.begin(), v.end(), 6);
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else 
	{
		cout << "�ҵ���" << endl;
	}
}

void test02()
{
	vector<Person> v;
	Person p1("��ɮ", 18);
	Person p2("�����", 600);
	Person p3("������", 559);
	Person p4("ɳ��", 400);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p("�����", 600);
	vector<Person>::iterator it = find(v.begin(), v.end(), p);
	if (it == v.end())
	{
		cout << "�����ڴ���" << endl;
	}
	else
	{
		cout << "����" << endl;
		cout << it->_name << " " << it->_age << endl;
	}

}

class MyCompare
{
public:
	bool operator()(Person& p)
	{
		return p._age > 100&&p._age<600;
	}
};

//find_if
void test03()
{
	vector<Person> v;
	Person p1("��ɮ", 18);
	Person p2("�����", 600);
	Person p3("������", 559);
	Person p4("ɳ��", 400);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), MyCompare());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
		cout << it->_name << " " << it->_age << endl;
	}


	
}

//adjacent_find
//�ҵ������ظ�Ԫ��,�����ص�һ���ظ�Ԫ�صĵ�����
void test04()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ��" << endl;
		cout << *it << endl;
	}
}

//binary_search  �������в�����
void test05()
{
	vector<int> v;
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
	}

	if (binary_search(v.begin(),v.end(),101))
	{
		cout << "�ҵ���" << "  " << endl;
	}
	else
	{
		cout << "û�ҵ�" << "  " << endl;
	}

}

//count ͳ���ظ�Ԫ�ظ���
void test06()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);

	int num = count(v.begin(), v.end(), 20);
	cout << num << endl;
}

class Compare
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

//count_if ������ͳ��Ԫ�ظ���
void test07()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Compare());
	cout << num << endl;

}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	return 0;
}
