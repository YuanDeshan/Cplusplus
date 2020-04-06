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
		cout << "未找到" << endl;
	}
	else 
	{
		cout << "找到了" << endl;
	}
}

void test02()
{
	vector<Person> v;
	Person p1("唐僧", 18);
	Person p2("孙悟空", 600);
	Person p3("猪悟能", 559);
	Person p4("沙悟净", 400);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p("孙悟空", 600);
	vector<Person>::iterator it = find(v.begin(), v.end(), p);
	if (it == v.end())
	{
		cout << "不存在此人" << endl;
	}
	else
	{
		cout << "存在" << endl;
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
	Person p1("唐僧", 18);
	Person p2("孙悟空", 600);
	Person p3("猪悟能", 559);
	Person p4("沙悟净", 400);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), MyCompare());
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到了" << endl;
		cout << it->_name << " " << it->_age << endl;
	}


	
}

//adjacent_find
//找到相邻重复元素,并返回第一个重复元素的迭代器
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
		cout << "未找到相邻重复元素" << endl;
	}
	else
	{
		cout << "找到相邻重复元素" << endl;
		cout << *it << endl;
	}
}

//binary_search  无序序列不可用
void test05()
{
	vector<int> v;
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
	}

	if (binary_search(v.begin(),v.end(),101))
	{
		cout << "找到了" << "  " << endl;
	}
	else
	{
		cout << "没找到" << "  " << endl;
	}

}

//count 统计重复元素个数
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

//count_if 按条件统计元素个数
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
