#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->_name = name;
		this->_age = age;
	}

	void ShowPerson()
	{
		cout << "Name: " << this->_name << " " << "Age: " << this->_age << endl;
	}

public:
	NameType _name;
	AgeType _age;
};

void test01()
{
	Person<string, int> p("Tom", 18);
	p.ShowPerson();
}

//��ģ��ͺ���ģ�������
//��ģ��û���Զ��Ƶ����͵�ʹ�÷�ʽ
//��ģ���ڲ����б��п�����Ĭ�ϲ���
//�磺 
	//template <class NameType,class AgeType=int>
//ʹ��ʱ��
	//Person<string> p("Tom", 18);
//int�Ϳ���ʡ�Բ�д

//��ģ���г�Ա�����Ĵ���ʱ��
//��ģ��ĳ�Ա����ֻ���ڵ���ʱ�Żᴴ��

//��ģ���������������
//1.ָ����������
void PrintPerson1(Person<string,int>&p)
{
	p.ShowPerson();
}

void test02()
{
	Person<string, int> p("Jack", 19);
	PrintPerson1(p);
}

//2.����ģ�廯	
template <class T1,class T2>
void PrintPerson2(Person<T1, T2>&p)
{
	p.ShowPerson();
}

void test03()
{
	Person<string, int> p("Sam", 20);
	PrintPerson2(p);
}

//3.������ģ�廯
template <class T>
void PrintPerson3(T& p)
{
	p.ShowPerson();
	cout << "T1�������ǣ�" << typeid(T).name() << endl;
}

void test04()
{
	Person<string, int> p("Kise", 21);
	PrintPerson3(p);
}

int main()
{
	//test01();
	test02();
	test03();
	test04();
	return 0;
}