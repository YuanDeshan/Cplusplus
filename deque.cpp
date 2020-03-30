#include <iostream>
#include <deque>
using std::cout;
using std::endl;
using std::deque;

void Printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque 构造函数
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 5; ++i)
	{
		d1.push_back(i);
	}
	Printdeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	Printdeque(d2);

	deque<int> d3(5, 999);
	Printdeque(d3);

	deque<int> d4(d3);
	Printdeque(d3);
}

//deque 赋值操作
void test02()
{
	deque<int> d1;
	for (int i = 0; i < 5; ++i)
	{
		d1.push_back(i);
	}
	Printdeque(d1);

	//operator= 赋值
	deque<int> d2;
	d2 = d1;
	Printdeque(d2);

	//assign赋值
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	Printdeque(d3);

	deque<int> d4;
	d4.assign(3, 999);
	Printdeque(d4);

}

int main()
{
	//test01();
	test02();
	return 0;
}