#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

//����:��������(�º���)��һ����,����һ������
//�ص�:
//1.����������ʹ��ʱ��������ͨ������������,�����в����ͷ���ֵ
//2.�������󳬳���ͨ�����ĸ���,��������������Լ���״̬
//3.�������������Ϊ��������

class Myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	Myadd add;
	cout << add(10, 20) << endl;
	
}

class MyPrint
{
public:
	MyPrint()
	{
		this->_count = 0;
	}
	void operator()(string str)
	{
		cout << str << endl;
		this->_count++;
	}

	int _count;
};

void test02()
{
	MyPrint Print;
	Print("hehe");
	Print("hehe");
	Print("hehe");
	cout << Print._count << endl;
}

void DoPrint(MyPrint& m, string str)
{
	m(str);
}

void test03()
{
	MyPrint Print;
	DoPrint(Print, "hehe");
}

int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}