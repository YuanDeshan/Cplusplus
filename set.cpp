#include <iostream>
#include <set>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::set;
using std::multiset;
using std::pair;  //对组
using std::make_pair;

void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器的构造和赋值
void test01()
{
	set<int> s1;
	s1.insert(3);
	s1.insert(4);
	s1.insert(3);
	s1.insert(1);
	//打印出来为 1 3 4 重复的值被舍去
	PrintSet(s1);

	//拷贝构造
	set<int> s2(s1);
	PrintSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	PrintSet(s3);

}

//set大小和交换
//size();//返回大小
//empty();//判空
//swap(st);//交换2个容器
void test02()
{
	set<int> s1;
	s1.insert(1);
	s1.insert(2);
	s1.insert(5);
	s1.insert(3);

	set<int> s2;
	s2.insert(10);
	s2.insert(30);
	s2.insert(50);
	s2.insert(20);

	cout << s1.size() << endl;
	if (s1.empty())
	{
		cout << "set为空" << endl;
	}
	else
	{
		cout << "set不为空" << endl;
	}

	cout << "交换前: " << endl;
	PrintSet(s1);
	PrintSet(s2);
	cout << "交换后: " << endl;
	s1.swap(s2);
	PrintSet(s1);
	PrintSet(s2);
}

//set插入和删除
void test03()
{
	set<int> s1;
	s1.insert(2);
	s1.insert(3);
	s1.insert(1);
	s1.insert(5);
	s1.insert(2);
	PrintSet(s1);

	//删除迭代器所指的位置,返回下一个元素迭代器
	s1.erase(s1.begin());
	PrintSet(s1);

	//erase(beg,end) //删除beg-end区间的值,返回下一个元素迭代器
	//删除值为5的元素
	s1.erase(5);
	PrintSet(s1);

	//清空容器
	s1.clear();
	PrintSet(s1);
}

//set查找和统计
void test04()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	set<int>::iterator pos = s1.find(40);
	if (pos!= s1.end())
	{
		cout << "找到元素了" <<*pos<< endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	int num = s1.count(20);
	cout << num << endl;


}


void PrintMultiset(const multiset<int>& s)
{
	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set和multiset
//二者插入重复的值,都会自动排序
//set不可插入重复的值,插入时会返回插入的结果,表示插入是否成功
//multiset可插入重复的值,插入时不会检测,所以可以插入重复数据
void test05()
{
	set<int> s;

	pair < set<int>::iterator, bool > ret = s.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}

	s.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	PrintSet(s);

	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	PrintMultiset(ms);
}

//pair对组的使用
void test06()
{
	pair<string, int> p1("Tom", 10);
	cout << p1.first << "  " << p1.second << endl;
	
	pair<string, int> p2 = make_pair("Jerry", 20);
	cout << p2.first << "  " << p2.second << endl;

}

class Mycompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

//内置类型指定排序规则
//利用仿函数
void test07()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	PrintSet(s1);

	set<int, Mycompare> s2;
	s2.insert(10);
	s2.insert(50);
	s2.insert(30);
	s2.insert(20);
	s2.insert(40);
	for (set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//自定义类型数据指定排序规则
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

class ComparePerson
{
public:
	bool operator ()(const Person& p1, const Person& p2)
	{
		return p1._age > p2._age;
	}
};

void test08()
{
	set<Person, ComparePerson> s;
	Person p1("唐僧", 20);
	Person p2("孙悟空", 550);
	Person p3("猪悟能", 530);
	Person p4("沙悟净", 200);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << it->_name << "  " << it->_age << endl;
	}
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	test08();
	return 0;
}