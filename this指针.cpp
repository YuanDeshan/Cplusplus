#include <iostream>

class Person
{
public:
	Person(int age)
	{
		//1.�βκͳ�Ա��������ͬʱ,thisָ������
		//thisָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}
	//2.���ض�������*this
	//����ֵ��&��Ϊ�˷���p2���õĺ��ֵ
	Person& Addage(Person &p)
	{
		this->age += p.age;
		return *this;
	}

	int age;
};
void test1()
{
	Person p(18);
	std::cout << p.age << std::endl;
}

void test2()
{
	Person p1(10);
	Person p2(10);
	//��ʽ���˼��
	p2.Addage(p1).Addage(p1).Addage(p1);
	std::cout << p2.age << std::endl;
}


int main()
{
	//test1();
	test2();
	return 0;
}