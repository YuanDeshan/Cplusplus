#include <iostream>
#include <algorithm>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

//copy 容器内指定范围内的元素拷贝到另一容器中
//replace 将容器内指定范围的旧元素修改为新元素
//replace_if 容器内指定范围满足条件的元素替换为新元素
//swap 交换两个容器的元素

void Print(int val)
{
	cout << val << "  ";
}

//1.copy
void  test01()
{
	vector<int> v1;
	for (int i = 0; i < 5; ++i)
	{
		v1.push_back(i);
	}
	vector<int> v2;
	v2.resize(v1.size());

	copy(v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Print);
	cout << endl;
}

//1.replace
void test02()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(20);
	v1.push_back(10);
	v1.push_back(40);

	for_each(v1.begin(), v1.end(), Print);
	cout << endl;

	replace(v1.begin(), v1.end(), 20, 999);
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
}

class Greater10
{
public:
	bool operator()(int val)
	{
		return val > 10;
	}

};

//3.replace_if
void test03()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(10);
	v.push_back(40);

	for_each(v.begin(), v.end(), Print);
	cout << endl;

	replace_if(v.begin(), v.end(), Greater10(), 999);
	for_each(v.begin(), v.end(), Print);
	cout << endl;
}

//4.swap
void test04()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
		v2.push_back(i+10);
	}

	swap(v1, v2);
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;

	for_each(v2.begin(), v2.end(), Print);
	cout << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}