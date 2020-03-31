#include <iostream>
#include <algorithm>
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

//deque大小操作
void test03()
{
	deque<int> d1;
	for (int i = 0; i < 5; ++i)
	{
		d1.push_back(i);
	}
	Printdeque(d1);

	if (d1.empty())
	{
		cout << "deque容器为空" << endl;
	}
	else
	{
		cout << "deque容器不为空" << endl;
	}

	cout << "deque大小:" << d1.size() << endl;

	//d1.resize(10);
	d1.resize(10, 5);
	Printdeque(d1);
}

//deque插入和删除
void test04()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	Printdeque(d1);
	//头插
	d1.push_front(30);
	d1.push_front(40);
	Printdeque(d1);
	//尾删
	d1.pop_back();
	//头删
	d1.pop_front();
	Printdeque(d1);

	//insert插入
	d1.insert(d1.begin(), 999);
	Printdeque(d1);

	d1.insert(d1.begin(),3, 999);
	Printdeque(d1);

	deque<int>::iterator it = d1.begin();
	d1.erase(it);
	Printdeque(d1);

	d1.clear();
	Printdeque(d1);

}

//deque存取操作
//at(int idx); 返回索引dex所指向的数据
//operator[]; 返回索引dex所指向的数据
//front(); 返回容器中第一个元素
//back(); 返回容器中最后一个元素

//deque容器排序
void test05()
{
	deque<int> d;
	d.push_back(4);
	d.push_front(5);
	d.push_back(7);
	d.push_back(2);
	d.push_back(9);
	d.push_front(1);
	d.push_front(3);
	d.push_front(6);
	d.push_front(8);
	Printdeque(d);

	//sort排序  默认从小到大
	sort(d.begin(), d.end());
	Printdeque(d);
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	return 0;
}