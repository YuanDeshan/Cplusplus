#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;


void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector¹¹Ôìº¯Êý
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	vector<int> v2(v1);
	PrintVector(v2);

	vector<int> v3(5, 9);
	PrintVector(v3);

	vector<int> v4(v3.begin(), v3.end());
	PrintVector(v4);


}

int main()
{
	test01();
	return 0;
}
