#include <iostream>
#include <vector>
using namespace std;

#if 1
void test1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.pop_back();
	vector<int>::const_reverse_iterator it = v.rbegin();
	while (it != v.rend())
	{
		cout << *it << endl;
		++it;
	}
}
#endif

#if 0
class person
{
public:
	person(int age, int height) 
	:_age(age)
	, _height(height)
	{}
public:
	int _age;
	int _height;
};

void test2()
{
	vector<person> v;
	person p1(18, 50);
	person p2(20, 60);
	v.push_back(p1);
	v.push_back(p2);
	vector<person>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << (*it)._age <<" "<< (*it)._height << endl;
		++it;
	}
}
#endif

int main()
{
	//test2();
	test1();
	return 0;
}