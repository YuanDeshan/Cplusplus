#include <iostream>
#include <fstream>
#include <string>

//�ı��ļ� д�ļ�
//1.����ͷ�ļ� fstream
//2.���������� ofstream ofs
//3.���ļ� ofs.open("�ļ���",�򿪷�ʽ)
//4.д�ļ� ofs<<""  �ɻ���
//5.�ر��ļ� ofs.close();

void test01()
{
	std::ofstream ofs;
	ofs.open("test.txt", std::ios::out);
	ofs << "ID:Kirito" << std::endl;
	ofs << "����:666666" << std::endl;
	ofs.close();
}

//�ı��ļ� ���ļ�
//1.����ͷ�ļ� fstream
//2.���������� ifstream
//3.�жϴ��ļ��Ƿ�ɹ�
//4.���ļ�
//5.�ر��ļ�

void test02()
{
	std::ifstream ifs;
	ifs.open("test.txt", std::ios::in);
	if (!ifs.is_open())
	{
		std::cout << "�ļ���ʧ��" << std::endl;
		return;
	}
	std::string buf;
	//ʹ��getline�����������stringͷ�ļ�
	while (getline(ifs, buf))
	{
		std::cout << buf << std::endl;
	}
}

class Person
{
public:
	char _name[1024];
	int _age;
};
//������ д�ļ�
//1.����ͷ�ļ�
//2.����������
//3.���ļ�
//4.д�ļ�
//5.�ر��ļ�
void test03()
{
	std::ofstream ofs;
	ofs.open("Person.txt", std::ios::out | std::ios::binary);
	Person p = { "Naruto",18 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}

//������ ���ļ�
//1.����ͷ�ļ�
//2.����������
//3.���ļ�,���ж��Ƿ�򿪳ɹ�
//4.���ļ�
//5.�ر��ļ�
void test04()
{
	std::ifstream ifs;
	ifs.open("Person.txt", std::ios::in | std::ios::binary);
	if (!ifs.is_open())
	{
		std::cout << "�ļ���ʧ��" << std::endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	std::cout << p._name << " " << p._age << std::endl;
	ifs.close();
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}