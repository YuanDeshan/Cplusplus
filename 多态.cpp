#include <iostream>

//��̬����
//1.��̬��̬:�������غ����������,���ú�����
//2.��̬��̬:��������麯��ʵ������ʱ��̬

//��̬��̬�Ͷ�̬��̬������:
//1.��̬��̬������ַ���--����׶�ȷ��������ַ--��̬����
//2.��̬��̬������ַ���--���н׶�ȷ��������ַ--��̬����


class Animals
{
public:
	//�ں���ǰ����virtual�ؼ���,��ô�ú�����Ϊ�麯��
	virtual void Speak()
	{
		std::cout << "������˵��" << std::endl;
	}
};

class Cat:public Animals
{
public:
	void Speak()
	{
		std::cout << "è��" << std::endl;
	}
};

class Dog:public Animals
{
public:
	void Speak()
	{
		std::cout << "����" << std::endl;
	}
};

void doSpeak(Animals &animals)
{
	animals.Speak();
}

//֮�������۴���ʲô����,������Ƕ����
//����Ϊ�ڱ���׶�,��Ӧ������ַ�Ѿ���
//һֱ������animal.speak()

//���ϣ������ʲô����,�͵���ʲô����ĺ���
//��Ҫʵ�ֶ�̬��̬

//��̬��������
//1.�м̳й�ϵ
//2.�����������д�����е��麯��
void test()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}
int main()
{
	test();
	return 0;
}