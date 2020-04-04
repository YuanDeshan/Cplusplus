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

//map�����ɾ��
//insert(elem) �������в���Ԫ��
//clear();���Ԫ��
//erase(pos); ɾ��pos��������ָ��Ԫ��,������һ��Ԫ�صĵ�����
//erase(beg,end);ɾ������[beg,end]������Ԫ��,������һ��Ԫ�صĵ�����
//erase(key);ɾ�������м�ֵΪkey��Ԫ��
void test03()
{
	map<int, string> m;
	//��һ��
	m.insert(pair<int, string>(1, "��ɮ"));
	//�ڶ���
	m.insert(make_pair(2, "�����"));
	//������
	m.insert(map<int, string>::value_type(3, "������"));
	//������
	//���Ƽ���������,����������keyֵ���ʵ�value
	m[4] = "ɳ��";
	PrintMap(m);

	//ɾ��
	m.erase(m.begin());
	PrintMap(m);

	m.erase(3);
	PrintMap(m);

	m.clear();

}

//map���Һ�ͳ��
void test04()
{
	map<int, string> m;
	m.insert(make_pair(1, "��ɮ"));
	m.insert(make_pair(2 ,"�����"));
	m.insert(make_pair(3, "������"));
	m.insert(make_pair(4, "ɳ��"));
	PrintMap(m);

	map<int, string>::iterator pos = m.find(4);
	if (pos != m.end())
	{
		cout << "���ҵ�Ԫ��: " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
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
		cout << "��ֵ: " << it->first << "  " << "ʵֵ: " << it->second << endl;
	}
}

//ָ�������
void test05()
{
	map<int, string,Mycompare> m;
	m.insert(make_pair(1, "��ɮ"));
	m.insert(make_pair(2 ,"�����"));
	m.insert(make_pair(3, "������"));
	m.insert(make_pair(4, "ɳ��"));
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