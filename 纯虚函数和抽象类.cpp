#include <iostream>


class Base
{
public:
	//�����е��麯����ʵ��ͨ�������������,��˽������е�
	//�麯����Ϊ���麯��,ʡ�Դ�����,����д=0;
	//��һ���������ٴ���һ�����麯��ʱ,��ô������Ϊ
	//�齱��,���Ҹ��಻��ʵ����,�����������д���麯��,
	//����,��������ҲΪ������
	virtual void Func() = 0;
};

class Drive:public Base
{
public:
	//��д�����еĴ��麯��
	virtual void Func()
	{
		std::cout << "Func()��������" << std::endl;
	}
};

void test1()
{
	Base* b = new Drive;
	b->Func();
	delete b;
}
int main()
{
	test1();
	return 0;
}
