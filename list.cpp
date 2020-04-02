#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator lit = L.begin(); lit != L.end(); ++lit)
	{
		cout << *lit << " ";
	}
	cout << endl;
}

//list���캯��
void test01()
{
	//1.Ĭ�Ϲ���
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	PrintList(L1);

	//2.��������
	list<int> L2(L1);
	PrintList(L2);
	
	//3.���乹��
	list<int> L3(L1.begin(), L1.end());
	PrintList(L3);

	//4.n��elem����
	list<int> L4(5, 999);
	PrintList(L4);
}

//list��ֵ
void test02()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	PrintList(L1);

	list<int> L2;
	L2.assign(L1.begin(), L1.end());
	PrintList(L2);

	list<int> L3;
	L3 = L2;
	PrintList(L3);

	list<int> L4;
	L4.assign(5, 999);
	PrintList(L4);
}

//list��ֵ
void test03()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);

	list<int> L2(5,999);
	cout << "����ǰ: " << endl;
	PrintList(L1);
	PrintList(L2);

	cout << "������: " << endl;
	PrintList(L1);
	PrintList(L2);
}


//list��С����
void test04()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ:" <<L1.size()<< endl;
	}

	//����ָ����С
	L1.resize(6, 999);//�����Ĳ�����999���
	PrintList(L1);

	L1.resize(3);
	PrintList(L1);
}

//list�����ɾ��
//push_back();  pop_back();  push_front();  pop_front();
//insert(pos, val); 
//erase(pos);
//remove(val);  ɾ������ֵΪval��Ԫ��
void test05()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(1);
	L1.push_back(1);
	L1.push_back(3);
	PrintList(L1);

	L1.remove(1);
	PrintList(L1);

	L1.clear();
	PrintList(L1);
}

//list���ݴ�ȡ
void test06()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_front(3);
	L1.push_front(4);
	PrintList(L1);

	cout << L1.front() << endl;
	cout << L1.back() << endl;

	//��������֧���������
}

bool MyCompare(int v1, int v2)
{
	return v1 > v2;
}

//list��ת������
void test07()
{
	list<int> L1;
	L1.push_back(3);
	L1.push_back(1);
	L1.push_back(5);
	L1.push_back(4);
	L1.push_back(2);
	PrintList(L1);

	L1.reverse();
	PrintList(L1);

	//Ĭ������
	L1.sort();
	PrintList(L1);
	//����
	L1.sort(MyCompare);
	PrintList(L1);

	
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