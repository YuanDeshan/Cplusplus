#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
#include <functional>
using std::cout;
using std::greater;
using std::endl;
using std::vector;

//1.sort 对容器内元素进行排序
//2.random_shuffle 洗牌 指定范围内的元素随机调整次序
//3.merge 容器元素合并,并存储另一容器中
//4.reverse 反转指定范围的元素


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

	cout << "排序前:" << endl;
	for_each(v.begin(), v.end(), Print);
	cout << endl;
	cout << "排序后:" << endl;
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
//两个容器必须是有序的
//合成后依然是有序的
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
