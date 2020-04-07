#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
#include <functional>
using std::cout;
using std::greater;
using std::endl;
using std::vector;

//1.sort ��������Ԫ�ؽ�������
//2.random_shuffle ϴ�� ָ����Χ�ڵ�Ԫ�������������
//3.merge ����Ԫ�غϲ�,���洢��һ������
//4.reverse ��תָ����Χ��Ԫ��


void Print(int val)
{
	cout << val << "  ";
}
//1.sort
void test01()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(2);
	v.push_back(6);
	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(0);

	cout << "����ǰ:" << endl;
	for_each(v.begin(), v.end(), Print);
	cout << endl;
	cout << "�����:" << endl;
	sort(v.begin(), v.end(),greater<int>());
	for_each(v.begin(), v.end(), Print);
	cout << endl;
}

//2.random_shuffle
void test02()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i + 10);
	}
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
	cout << endl;
	
}

//3.merge
//�������������������
//�ϳɺ���Ȼ�������
void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
		v1.push_back(i+2);
	}
		
	vector<int> v3;
	v3.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), Print);
}

//4.reverse 
void test04()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), Print);
	cout << endl;

	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
	cout << endl;
}
int main()
{
	srand((unsigned int)time(NULL));
	//test01();
	//test02();
	test03();
	//test04();
	return 0;
}
