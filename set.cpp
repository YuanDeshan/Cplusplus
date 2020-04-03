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


int main()
{
	//test01();
	test02();
	return 0;
}