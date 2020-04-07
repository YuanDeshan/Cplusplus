#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using std::cout;
using std::endl;
using std::vector;

//accumulate ��������Ԫ���ۼ��ܺ�
//fill �����������Ԫ��

//1.accumulate
void test01()
{
	vector<int> v;
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i + 1);
	}

	//0Ϊ��ʼ�ۼ�ֵ
	int total = accumulate(v.begin(), v.end(), 0);
	cout << total << endl;
}

void Print(int val)
{
	cout << val << "  ";
}


//2.fill
void test02()
{
	vector<int> v;
	//��������5��0
	v.resize(5);

	//�����������
	fill(v.begin(), v.end(), 999);
	for_each(v.begin(), v.end(), Print);
	cout << endl;

}
int main()
{
	//test01();
	test02();
	return 0;
}