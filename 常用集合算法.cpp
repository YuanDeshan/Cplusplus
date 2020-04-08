#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::min;
using std::max;

//set_intersection 求两个容器的交集
//set_union 求两个容器的并集
//ste_difference 求两个容器的差集

void Print(int val)
{
	cout << val << "  ";
}

//1.set_intersection
//原容器必须是有序的
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
	//min()在std中
	v3.resize(min(v1.size(), v2.size()));

	//返回
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
	//min()在std中
	v3.resize(v1.size()+ v2.size());

	//返回
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
	//min()在std中
	v3.resize(max(v1.size(), v2.size()));

	//返回
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