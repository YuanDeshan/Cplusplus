#include <iostream>

class Person
{
public:

	//1.+�����������
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

int main()
{
	test1();
	return 0;
}