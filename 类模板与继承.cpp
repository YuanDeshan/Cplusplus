#include <iostream>
using std::cout;
using std::endl;

//��ģ����̳�
//1.������̳еĸ�����һ����ģ��ʱ��������������ʱ����Ҫָ��������T������
template <class T>
class Base
{
public:
	T _a;

};

//class Drive1:public Base
class Drive1:public Base<int>
{
	
};
//2.�����ָ�����������޷�������������ڴ�
//3.��������ָ��������T�����ͣ�����Ҳ���Ϊ��ģ��
template <class T1,class T2>
class Drive2 :public Base<T1>
{
public:
	Drive2()
	{
	cout << "T1�������ǣ� " << typeid(T1).name() << endl;
	cout << "T2�������ǣ� " << typeid(T2).name() << endl;
	}
	T2 _b;
};
void test01()
{
	Drive2<char, int> d;
}

int main()
{
	test01();
	return 0;
}