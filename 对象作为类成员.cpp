#include <iostream>
#include <string>

class Phone
{
public:
	Phone(std::string PName):_PName(PName)
	{
		std::cout << "Phone�Ĺ��캯��" << std::endl;
	}
	std::string _PName;
	~Phone()
	{
		std::cout << "Phone����������" << std::endl;
	}
};

class Person
{
public:
	Person(std::string name,std::string mphone):_Name(name),_mphone(mphone)
	{
		std::cout << "Person�Ĺ��캯��" << std::endl;
	}
	std::string _Name;
	Phone _mphone;
	~Person()
	{
		std::cout << "Person����������" << std::endl;
	}
};
//������Ϊ���Աʱ,
//����ʱ�ȹ��������,�ٹ�������
//����ʱ����������,�����������
int main()
{

	Person p("С��", "nova6");
	return 0;
}