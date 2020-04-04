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
		cout << "��ֵ: " << it->first << "  " << "ʵֵ: " << it->second << endl;
	}
}

//map�Ĺ���͸�ֵ
void test01()
{
	map<int, string> m;
	m.insert(pair<int, string>(1, "��ɮ"));
	m.insert(pair<int, string>(2, "�����"));
	m.insert(pair<int, string>(3, "������"));
	m.insert(pair<int, string>(4, "ɳ��"));
	PrintMap(m);

	map<int, string> m2(m);
	PrintMap(m2);

	map<int, string> m3;
	m3 = m2;
	PrintMap(m3);
}

//map�����Ĵ�С�ͽ���	
void test02()
{
	map<int, string> m;
	m.insert(pair<int, string>(1, "��ɮ"));
	m.insert(pair<int, string>(2, "�����"));
	m.insert(pair<int, string>(3, "������"));
	m.insert(pair<int, string>(4, "ɳ��"));
	PrintMap(m);

	if (m.empty())
	{
		cout << "map����Ϊ��" << endl;
	}
	else
	{
		cout << "map������Ϊ��,��СΪ: " << m.size() << endl;
	}

	map<int, string> m2;
	m2.insert(pair<int, string>(0, "��"));
	PrintMap(m2);
	m2.swap(m);
	cout << "������: " << endl;
	PrintMap(m);
	PrintMap(m2);
}

int main()
{
	//test01();
	test02();
	return 0;
}