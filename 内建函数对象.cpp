#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::negate;
using std::plus;
using std::greater;
using std::vector;


//算数仿函数
//negate 一元仿函数 取反仿函数
void test01()
{
	//实例化对象后进行使用
	negate<int> n;
	cout << n(50) << endl;
}

//plus 二元仿函数
void test02()
{
	plus<int> add;
	cout << add(20, 30) << endl;
}

//乘法 multiplies
//除法 divides
//取模 modulus

//关系仿函数
//大于仿函数 greater
void test03()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(5);
	v.push_back(6);
	v.push_back(1);
	v.push_back(3);


	//指定排序规则
	sort(v.begin(), v.end(),greater<int>());

	for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << "  ";
	}
	cout << endl;

}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}