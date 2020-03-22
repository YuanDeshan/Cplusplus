#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//遍历访问
	//第一种方式：
	//vector<int>::iterator itbegin = v.begin();//指向第一个元素
	//vector<int>::iterator itend = v.end();//指向最后一个元素的下一个位置
	//while (itbegin != itend)
	//{
	//	cout << *itbegin << endl;
	//	++itbegin;
	//}

	//第二种方式：
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
}



int main()
{
	test01();
	return 0;
}