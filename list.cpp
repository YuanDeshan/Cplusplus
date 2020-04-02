#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator lit = L.begin(); lit != L.end(); ++lit)
	{
		cout << *lit << " ";
	}
	cout << endl;
}

//list构造函数
void test01()
{
	//1.默认构造
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	PrintList(L1);

	//2.拷贝构造
	list<int> L2(L1);
	PrintList(L2);
	
	//3.区间构造
	list<int> L3(L1.begin(), L1.end());
	PrintList(L3);

	//4.n个elem构造
	list<int> L4(5, 999);
	PrintList(L4);
}

//list赋值
void test02()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	PrintList(L1);

	list<int> L2;
	L2.assign(L1.begin(), L1.end());
	PrintList(L2);

	list<int> L3;
	L3 = L2;
	PrintList(L3);

	list<int> L4;
	L4.assign(5, 999);
	PrintList(L4);
}

//list赋值
void test03()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);

	list<int> L2(5,999);
	cout << "交换前: " << endl;
	PrintList(L1);
	PrintList(L2);

	cout << "交换后: " << endl;
	PrintList(L1);
	PrintList(L2);
}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}