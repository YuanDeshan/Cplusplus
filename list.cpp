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


//list大小操作
void test04()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);

	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的大小为:" <<L1.size()<< endl;
	}

	//重新指定大小
	L1.resize(6, 999);//超出的部分用999填充
	PrintList(L1);

	L1.resize(3);
	PrintList(L1);
}

//list插入和删除
//push_back();  pop_back();  push_front();  pop_front();
//insert(pos, val); 
//erase(pos);
//remove(val);  删掉所有值为val的元素
void test05()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(1);
	L1.push_back(1);
	L1.push_back(3);
	PrintList(L1);

	L1.remove(1);
	PrintList(L1);

	L1.clear();
	PrintList(L1);
}

//list数据存取
void test06()
{
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_front(3);
	L1.push_front(4);
	PrintList(L1);

	cout << L1.front() << endl;
	cout << L1.back() << endl;

	//迭代器不支持随机访问
}

bool MyCompare(int v1, int v2)
{
	return v1 > v2;
}

//list反转和排序
void test07()
{
	list<int> L1;
	L1.push_back(3);
	L1.push_back(1);
	L1.push_back(5);
	L1.push_back(4);
	L1.push_back(2);
	PrintList(L1);

	L1.reverse();
	PrintList(L1);

	//默认升序
	L1.sort();
	PrintList(L1);
	//降序
	L1.sort(MyCompare);
	PrintList(L1);

	
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	return 0;
}