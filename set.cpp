#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;

//set��multiset
//���߲����ظ���ֵ,�����Զ�����
//set���ɲ����ظ���ֵ
//multiset�ɲ����ظ���ֵ

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


int main()
{
	//test01();
	test02();
	return 0;
}