#if 0
#include <iostream>

//������
//1.��Ա�����������const��֮Ϊ������
//2.�������ڲ������޸ĳ�Ա����
//3.��Ա��������ʱǰ�����mutable��,�ڳ���������Ȼ�����޸�
class Person
{
public:
	void showPerson()const
	{
		this->_B = 18;
		//this->_A = 100;//thisָ��ָ���ֵ�����޸�,�൱�� const Person * const this
		//this = NULL;//thisָ��Ϊָ�볣��,��ָ���ָ���ܱ��޸�
		std::cout << _B << std::endl;
	}
	void func()
	{
		_A = 100;
		std::cout << "���Ժ���" << std::endl;
	}

	int _A;
	//��Ա����ǰ��mutable,�ڳ������п��Խ����޸�
	mutable int _B;

};

//������
//1.��������ǰ��const��Ϊ������
//2.������ֻ�ܵ�������
void test1()
{
	const Person p;
	p.showPerson();
	//p.func();//���ܵ���,��Ϊfunc�������ܻ��޸ĳ�Ա����
}
int main()
{
	test1();
	return 0;
}
#endif