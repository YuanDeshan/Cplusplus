#include <iostream>
#include <string>

//������
//��������������Կ����ڶ���,����ָ�����ͷ�ʱ�޷����õ��������������
//�������:�������ʹ�������

class Animals
{
public:
	Animals()
	{
		std::cout << "Animals�Ĺ��캯��" << std::endl;
	}
	virtual void Speak() = 0;

	//������
	//��Ҫ����ʵ��
	//virtual ~Animals()
	//{
	//	std::cout << "Animals����������" << std::endl;
	//}

	//��������
	//����������Ҫ����ʵ��
	virtual ~Animals() = 0;
};

Animals::~Animals()
{
	std::cout << "Animals����������" << std::endl;
}

class Cat:public Animals
{
public:

	Cat(std::string name)
	{
		_name = new std::string(name);
		std::cout << "Cat�Ĺ��캯��" << std::endl;
	}
	void Speak()
	{
		std::cout << "è��" << std::endl;
	}

	std::string* _name;

	~Cat()
	{
		if (_name != NULL)
		{
			delete _name;
			_name = NULL;
		}
		std::cout << "Cat��������" << std::endl;
	}
};

void test01()
{
	Animals* pa = new Cat("jack");
	pa->Speak();
	delete pa;
}
int main()
{
	test01();
	return 0;
}