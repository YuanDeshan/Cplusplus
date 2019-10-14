#if 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1.构造
void test1()
{
	vector<int> v1;//构造一个空的vector<int>对象
	vector<int> v2(5,1);//构造一个vector<int>对象,并初始化5个1
	vector<int> v3(v2);//拷贝构造
}

//2.利用迭代器打印
void test2()
{
	vector<int> v1;
	vector<int> v2(5,6);
	vector<int> v3(v2);
	vector<int>::iterator it;
	//v3.begin():指向v3的第一个元素
	//v3.end():指向v3的末尾,最后一个元素的下一个位置
	for (it = v3.begin(); it != v3.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<int>::const_reverse_iterator rit;
	//v3.rbegin():指向v3开头,第一个元素的前一个位置
	//v3.rend():指向v3的最后一个元素
	for (rit = v3.rbegin(); rit != v3.rend(); ++rit)
	{
		cout << *rit << " ";
	}
	cout << endl;

}

//3.容量
void test3()
{
	vector<int> v1(5,6);
	cout << v1.size() << " "<<v1.capacity() << endl;
	cout << v1.empty() << endl;
}

//4.增
void test4()
{
	vector<int> v1;
	v1.push_back(0);//尾插
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	for (int i = 0; i <(int) v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int>::iterator pos = v1.begin() + 1;//pos指向下标为1的元素
	v1.insert(pos, 6);
	cout << v1[1] << endl;//可见是在pos位置前插入的元素

}

//5.删
void test5()
{
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.pop_back();//尾删
	for (int i = 0; i <(int) v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int>::iterator pos = v1.begin() + 1;
	v1.erase(pos);//删除下标位置为1的元素
	for (int i = 0; i <(int) v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

//6.查
//find并不在vector中,而在algorithm中
void test6()
{
	vector<int> v1;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it;
	it = find(v1.begin(), v1.end(), 6);
	if (it != v1.end())
	{
		cout << "Find success! " << *it << endl;
	}
	else
	{
		cout << "Find failed!";
	}
}

//7.交换
void test7()
{
	vector<int> v1(1,10);
	vector<int> v2(1,20);
	v1.swap(v2);
}

//8.其他
void test8()
{
	vector<int> v1;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
	}
	cout << v1.front() << endl;
	v1.clear();
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	test8();
	return 0;
}
#endif