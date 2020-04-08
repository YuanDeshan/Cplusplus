#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::min;
using std::max;

//set_intersection �����������Ľ���
//set_union �����������Ĳ���
//ste_difference �����������Ĳ

void Print(int val)
{
	cout << val << "  ";
}

//1.set_intersection
//ԭ���������������
void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
		v2.push_back(i + 3);
	}

	vector<int> v3;
	//min()��std��
	v3.resize(min(v1.size(), v2.size()));

	//����
	vector<int>::iterator itend=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), v3.end(), Print);
	cout << endl;

}

//2.set_union
void test02()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
		v2.push_back(i + 3);
	}

	vector<int> v3;
	//min()��std��
	v3.resize(v1.size()+ v2.size());

	//����
	vector<int>::iterator itend=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), v3.end(), Print);
	cout << endl;

}

//3.set_difference
void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
		v2.push_back(i + 3);
	}

	vector<int> v3;
	//min()��std��
	v3.resize(max(v1.size(), v2.size()));

	//����
	vector<int>::iterator itend=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), v3.end(), Print);
	cout << endl;

}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}