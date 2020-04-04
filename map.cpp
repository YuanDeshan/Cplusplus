#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::multimap;
using std::pair;

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

int main()
{
	//test01();
	test02();
	return 0;
}