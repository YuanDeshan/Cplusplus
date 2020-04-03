#include <iostream>
#include <set>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::set;
using std::multiset;
using std::pair;  //����
using std::make_pair;

void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set�����Ĺ���͸�ֵ
void test01()
{
	set<int> s1;
	s1.insert(3);
	s1.insert(4);
	s1.insert(3);
	s1.insert(1);
	//��ӡ����Ϊ 1 3 4 �ظ���ֵ����ȥ
	PrintSet(s1);

	//��������
	set<int> s2(s1);
	PrintSet(s2);

	//��ֵ
	set<int> s3;
	s3 = s2;
	PrintSet(s3);

}

//set��С�ͽ���
//size();//���ش�С
//empty();//�п�
//swap(st);//����2������
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
		cout << "setΪ��" << endl;
	}
	else
	{
		cout << "set��Ϊ��" << endl;
	}

	cout << "����ǰ: " << endl;
	PrintSet(s1);
	PrintSet(s2);
	cout << "������: " << endl;
	s1.swap(s2);
	PrintSet(s1);
	PrintSet(s2);
}

//set�����ɾ��
void test03()
{
	set<int> s1;
	s1.insert(2);
	s1.insert(3);
	s1.insert(1);
	s1.insert(5);
	s1.insert(2);
	PrintSet(s1);

	//ɾ����������ָ��λ��,������һ��Ԫ�ص�����
	s1.erase(s1.begin());
	PrintSet(s1);

	//erase(beg,end) //ɾ��beg-end�����ֵ,������һ��Ԫ�ص�����
	//ɾ��ֵΪ5��Ԫ��
	s1.erase(5);
	PrintSet(s1);

	//�������
	s1.clear();
	PrintSet(s1);
}

//set���Һ�ͳ��
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
		cout << "�ҵ�Ԫ����" <<*pos<< endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
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

//set��multiset
//���߲����ظ���ֵ,�����Զ�����
//set���ɲ����ظ���ֵ,����ʱ�᷵�ز���Ľ��,��ʾ�����Ƿ�ɹ�
//multiset�ɲ����ظ���ֵ,����ʱ������,���Կ��Բ����ظ�����
void test05()
{
	set<int> s;

	pair < set<int>::iterator, bool > ret = s.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}

	s.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}
	PrintSet(s);

	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	PrintMultiset(ms);
}

//pair�����ʹ��
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

//��������ָ���������
//���÷º���
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

//�Զ�����������ָ���������
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
	Person p1("��ɮ", 20);
	Person p2("�����", 550);
	Person p3("������", 530);
	Person p4("ɳ��", 200);

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