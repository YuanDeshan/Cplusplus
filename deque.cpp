#include <iostream>
#include <deque>
using std::cout;
using std::endl;
using std::deque;

void Printdeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque ¹¹Ôìº¯Êý
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 5; ++i)
	{
		d1.push_back(i);
	}
	Printdeque(d1);
}

int main()
{
	test01();
	return 0;
}