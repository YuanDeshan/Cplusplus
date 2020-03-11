#include <iostream>
#include <fstream>
#include <string>

//文本文件 写文件
//1.包含头文件 fstream
//2.创建流对象 ofstream ofs
//3.打开文件 ofs.open("文件名",打开方式)
//4.写文件 ofs<<""  可换行
//5.关闭文件 ofs.close();

void test01()
{
	std::ofstream ofs;
	ofs.open("test.txt", std::ios::out);
	ofs << "ID:Kirito" << std::endl;
	ofs << "密码:666666" << std::endl;
	ofs.close();
}

//文本文件 读文件
//1.包含头文件 fstream
//2.创建流对象 ifstream
//3.判断打开文件是否成功
//4.读文件
//5.关闭文件

void test02()
{
	std::ifstream ifs;
	ifs.open("test.txt", std::ios::in);
	if (!ifs.is_open())
	{
		std::cout << "文件打开失败" << std::endl;
		return;
	}
	std::string buf;
	//使用getline函数必须包含string头文件
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
//二进制 写文件
//1.包含头文件
//2.创建流对象
//3.打开文件
//4.写文件
//5.关闭文件
void test03()
{
	std::ofstream ofs;
	ofs.open("Person.txt", std::ios::out | std::ios::binary);
	Person p = { "Naruto",18 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}

//二进制 读文件
//1.包含头文件
//2.创建流对象
//3.打开文件,并判断是否打开成功
//4.读文件
//5.关闭文件
void test04()
{
	std::ifstream ifs;
	ifs.open("Person.txt", std::ios::in | std::ios::binary);
	if (!ifs.is_open())
	{
		std::cout << "文件打开失败" << std::endl;
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