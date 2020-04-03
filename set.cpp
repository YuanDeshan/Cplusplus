#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;

//set和multiset
//二者插入重复的值,都会自动排序
//set不可插入重复的值
//multiset可插入重复的值

void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器的构造和赋值
void test01()
{
	set<int> s1;
	s1.insert(3);
	s1.insert(4);
	s1.insert(3);
	s1.insert(1);
	//打印出来为 1 3 4 重复的值被舍去
	PrintSet(s1);

	//拷贝构造
	set<int> s2(s1);
	PrintSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	PrintSet(s3);

}

//set大小和交换
//size();//返回大小
//empty();//判空
//swap(st);//交换2个容器
void test02()
{
	set<int> s1;
	s1.insert(1);
	s1.insert(2);
	s1.insert(5);
	s1.insert(3);

	set<int> s2;
	s2.insert(10);
	s2.insert(30);
	s2.insert(50);
	s2.insert(20);

	cout << s1.size() << endl;
	if (s1.empty())
	{
		cout << "set为空" << endl;
	}
	else
	{
		cout << "set不为空" << endl;
	}

	cout << "交换前: " << endl;
	PrintSet(s1);
	PrintSet(s2);
	cout << "交换后: " << endl;
	s1.swap(s2);
	PrintSet(s1);
	PrintSet(s2);
}

//set插入和删除
void test03()
{
	set<int> s1;
	s1.insert(2);
	s1.insert(3);
	s1.insert(1);
	s1.insert(5);
	s1.insert(2);
	PrintSet(s1);

	//删除迭代器所指的位置,返回下一个元素迭代器
	s1.erase(s1.begin());
	PrintSet(s1);

	//erase(beg,end) //删除beg-end区间的值,返回下一个元素迭代器
	//删除值为5的元素
	s1.erase(5);
	PrintSet(s1);

	//清空容器
	s1.clear();
	PrintSet(s1);
}

//set查找和统计
void test04()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	set<int>::iterator pos = s1.find(40);
	if (pos!= s1.end())
	{
		cout << "找到元素了" <<*pos<< endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	int num = s1.count(20);
	cout << num << endl;


}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}