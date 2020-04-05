#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::negate;
using std::plus;
using std::greater;
using std::vector;


//�����º���
//negate һԪ�º��� ȡ���º���
void test01()
{
	//ʵ������������ʹ��
	negate<int> n;
	cout << n(50) << endl;
}

//plus ��Ԫ�º���
void test02()
{
	plus<int> add;
	cout << add(20, 30) << endl;
}

//�˷� multiplies
//���� divides
//ȡģ modulus

//��ϵ�º���
//���ڷº��� greater
void test03()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(5);
	v.push_back(6);
	v.push_back(1);
	v.push_back(3);


	//ָ���������
	sort(v.begin(), v.end(),greater<int>());

	for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << "  ";
	}
	cout << endl;

}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}