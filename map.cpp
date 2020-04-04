#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::multimap;
using std::pair;
using std::make_pair;

void PrintMap(map<int, string>& m)
{
	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "键值: " << it->first << "  " << "实值: " << it->second << endl;
	}
}

//map的构造和赋值
void test01()
{
	map<int, string> m;
	m.insert(pair<int, string>(1, "唐僧"));
	m.insert(pair<int, string>(2, "孙悟空"));
	m.insert(pair<int, string>(3, "猪悟能"));
	m.insert(pair<int, string>(4, "沙悟净"));
	PrintMap(m);

	map<int, string> m2(m);
	PrintMap(m2);

	map<int, string> m3;
	m3 = m2;
	PrintMap(m3);
}

//map容器的大小和交换	
void test02()
{
	map<int, string> m;
	m.insert(pair<int, string>(1, "唐僧"));
	m.insert(pair<int, string>(2, "孙悟空"));
	m.insert(pair<int, string>(3, "猪悟能"));
	m.insert(pair<int, string>(4, "沙悟净"));
	PrintMap(m);

	if (m.empty())
	{
		cout << "map容器为空" << endl;
	}
	else
	{
		cout << "map容器不为空,大小为: " << m.size() << endl;
	}

	map<int, string> m2;
	m2.insert(pair<int, string>(0, "空"));
	PrintMap(m2);
	m2.swap(m);
	cout << "交换后: " << endl;
	PrintMap(m);
	PrintMap(m2);
}

//map插入和删除
//insert(elem) 在容器中插入元素
//clear();清空元素
//erase(pos); 删除pos迭代器所指的元素,返回下一个元素的迭代器
//erase(beg,end);删除区间[beg,end]的所有元素,返回下一个元素的迭代器
//erase(key);删除容器中键值为key的元素
void test03()
{
	map<int, string> m;
	//第一种
	m.insert(pair<int, string>(1, "唐僧"));
	//第二种
	m.insert(make_pair(2, "孙悟空"));
	//第三种
	m.insert(map<int, string>::value_type(3, "猪悟能"));
	//第四种
	//不推荐用来插入,常用来利用key值访问到value
	m[4] = "沙悟净";
	PrintMap(m);

	//删除
	m.erase(m.begin());
	PrintMap(m);

	m.erase(3);
	PrintMap(m);

	m.clear();

}

//map查找和统计
void test04()
{
	map<int, string> m;
	m.insert(make_pair(1, "唐僧"));
	m.insert(make_pair(2 ,"孙悟空"));
	m.insert(make_pair(3, "猪悟能"));
	m.insert(make_pair(4, "沙悟净"));
	PrintMap(m);

	map<int, string>::iterator pos = m.find(4);
	if (pos != m.end())
	{
		cout << "已找到元素: " << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	int num = m.count(2);
	cout << num << endl;
}

class Mycompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};


void PrintMap01(map<int, string,Mycompare>& m)
{
	for (map<int, string,Mycompare>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "键值: " << it->first << "  " << "实值: " << it->second << endl;
	}
}

//指定排序规
void test05()
{
	map<int, string,Mycompare> m;
	m.insert(make_pair(1, "唐僧"));
	m.insert(make_pair(2 ,"孙悟空"));
	m.insert(make_pair(3, "猪悟能"));
	m.insert(make_pair(4, "沙悟净"));
	PrintMap01(m);
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	return 0;
}