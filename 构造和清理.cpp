#include <iostream>

#if 0
class Person
{
public:
	//���캯��
	//1.��������������ͬ,�޷���ֵ
	//2.���޲�������,�ɷ�������
	//3.��������ʱ,�ɱ������Զ�����,��ֻ����һ��
	Person()
	{
		std::cout << "���캯��" << std::endl;
	}

	//��������
	//1.��������������ͬ,��ǰ����~
	//2.û�в���,���ɷ�������
	//3.����������ǰ,�ɱ������Զ�����,��ֻ����һ��
	~Person()
	{
		std::cout << "��������" << std::endl;
	}
private:
	int age;
};

void test()
{
	Person p;
}
#endif

//���캯������
//1.��������Ϊ:�޲ι�����вι���
//2.�����ͷ�:��Ϊ��ͨ����(Ĭ�Ϲ��캯��)�Ϳ������캯��
class Person
{
public:
	Person()
	{
		std::cout << "�޲ι��캯��" << std::endl;
	}
	Person(int a)
	{
		_age = a;
		std::cout << "�вι��캯��" << std::endl;
	}
	Person(const Person &p)
	{
		_age = p._age;
		std::cout << "�������캯��" << std::endl;

	}

private:
	int _age;
};
//�޲ι��캯������
void test0()
{
	Person p;
}
//�вι��캯������
void test1()
{
	Person p(10);
}
//�������캯������
void test2()
{
	Person p(20);
	Person p1(p);
}
//���÷���
void test3()
{
	//1.���ŷ�
	//Person p;//Ĭ�Ϲ���
	//Person p1(10);//�вι���
	//Person p2(p1);//��������

	//2.��ʾ��
	//Person p;//Ĭ�Ϲ���
	//Person p1 = Person(10);//�вι���
	////Person(10);
	////��Ϊ��������,��ǰ��ִ�н�����,ϵͳ���������յ���������
	//Person p2 = Person(p1);//��������

	//3.��ʽת����
	Person p;
	Person p1 = 10;//�൱��Person p1=Person(10);  �вι���
	Person p2 = p;//�൱��Person p2=Person(p);  ��������
}
int main()
{

	//test();
	//test0();
	//test1();
	//test2();
	test3();
	return 0;
}
