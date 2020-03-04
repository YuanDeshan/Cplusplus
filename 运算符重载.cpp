#include <iostream>
#include <string>

//1.+�����������
#if 0
class Person
{
public:

	//��ʽһ:��Ա��������
	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp._A = this->_A + p._A;
	//	temp._B = this->_B + p._B;
	//	return temp;
	//}

public:
	int _A;
	int _B;
};

//��ʽ��:ȫ�ֺ�������
Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp._A = p1._A + p2._A;
	temp._B = p1._B + p2._B;
	return temp;
}
void test1()
{
	Person p1;
	p1._A = 10;
	p1._B = 20;

	Person p2;
	p2._A = 10;
	p2._B = 20;

	//��Ա������������صı��ʵ���
	//Person p3=p1.operator+(p2);
	Person p3 = p1 + p2;
	std::cout << p3._A << std::endl;
	std::cout << p3._B << std::endl;
}
#endif

#if 0
//2.����<<�����
class Person
{
	friend std::ostream& operator<<(std::ostream &cout, Person &p);
public:
	Person(int a, int b)
	{
		_A = a;
		_B = b;
	}
	//���ó�Ա��������<<�����
	//p.operator<<(cout) �򻯰汾 p<<cout
	//�������ó�Ա��������<<,��Ϊ�޷�ʵ��cout�����
	/*void operator<<(cout)
	{

	}*/
private:
	int _A;
	int _B;
};
//����ȫ�ֺ�������<<
//ostream����ֻ��һ��,����������
std::ostream& operator<<(std::ostream &cout, Person &p)
{
	cout << p._A << " " << p._B;
	//����cout���ں������
	return cout;
}

void test2()
{
	Person p(10, 20);
	std::cout << p << std::endl;
}
#endif

#if 0
//3.++���������
class MyInt
{
public:
	MyInt()
	{
		_A = 0;
	}
	//ǰ��++����
	//����������Ϊ����һ�����ݽ��е���
	MyInt& operator++()
	{
		++_A;
		return *this;
	}

	//����++����
	MyInt operator++(int)//int ��Ϊռλ����
	{
		MyInt Temp=*this;
		_A++;
		return Temp;
	}

public:
	int _A;
};

//<<����
std::ostream& operator<<(std::ostream &cout, MyInt &p)
{
	std::cout << p._A;
	return cout;
}

void test3()
{
	MyInt M;
	std::cout << M << std::endl;
	std::cout << ++M << std::endl;
	std::cout << M << std::endl;

}
#endif

#if 0
//4 =�����������
class Person
{
public:
	Person(int age)
	{
		_page = new int(age);
	}


	Person& operator=(Person &p)
	{
		//�ж϶����Ƿ��������ڶ���,�еĻ�Ҫ�����ͷ�
		if (_page != NULL)
		{
			delete _page;
			_page = NULL;
		}
		_page = new int(*p._page);
		//��Ҫ������ֵ,��Ҫ���ض�����,����ֵ����ΪPerson&
		return *this;

	}
	~Person()
	{
		if (_page != NULL)
		{
			delete _page;
			_page = NULL;
		}
	}

public:
	int  *_page;
};

void test4()
{
	Person p1(18);
	Person p2(20);
	//p1 = p2;//���ָ�ֵΪǳ����,p1��p2��������ͬһ���ڴ�
			//�����߶�������������ʱ,���ظ��ͷ�ͬһ���ڴ�ռ�
			//���,Ҫ��������ķ�ʽ���,����������=�����
	Person p3(0);
	p3 = p2 = p1;
	std::cout << *p1._page << std::endl;
	std::cout << *p2._page << std::endl;
	std::cout << *p3._page << std::endl;
}
#endif

#if 0
//5.���ع�ϵ�����
class Person
{
public:
	Person(std::string name, int age)
	{
		_name = name;
		_age = age;
	}
	//�������������
	bool operator==(Person &p)
	{
		if (this->_name == p._name&&this->_age == p._age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
public:
	std::string _name;
	int _age;
};

void test5()
{
	Person p1("san", 18);
	Person p2("san", 18);
	if (p1 == p2)
	{
		std::cout << "p1��p2����ȵ�" << std::endl;
	}
}
#endif 

//���غ�������()
class MyPrint
{
public:
	void operator()(std::string str)
	{
		std::cout << str << std::endl;
	}
};

void test6()
{
	MyPrint m;
	m("hehe");
	MyPrint()("haha");
	//MyPrintΪ������������,MyPrintΪ��������,��ǰ��ִ�н�����,�������


}
int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}