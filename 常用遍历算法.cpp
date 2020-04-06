#include <iostream>
#include <algorithm>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void Print(int val)
{
	cout << val << " ";
}

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}

	//����������Ϊ��ͨ����ʱ,��������,Ϊ�º���ʱ,������
	//for_each(v.begin(), v.end(), Print);
	//MyPrintΪ������������
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

class TransForm
{
public:
	int operator()(int val)
	{
		//return val;
		return val + 10;
	}
};

//transform ����������һ������
void test02()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}

	vector<int> v1;
	//��Ҫ��Ŀ������ָ����С
	v1.resize(v.size());

	transform(v.begin(), v.end(), v1.begin(), TransForm());
	for_each(v1.begin(), v1.end(), MyPrint());
	cout << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}