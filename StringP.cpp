#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

//string构造函数
//string本质是一个类，其构造方式有以下几种：
//1.string(); 创造一个空的字符串；
//2.string(const char* s); 使用字符串s初始化
//3.string(const string&str); 使用一个string对象初始化另一个string对象
//3.string(int n,char c); 使用n个字符c初始化
void test01()
{
	string str;

	const char* s = "hehe";
	string str1(s);
	cout << str1 << endl;
	
	string str2(str1);
	cout << str2 << endl;
	
	string str3(9, 'A');
	cout << str3 << endl;
}

//赋值操作
void test02()
{
	string str1;
	str1 = "hehe";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	string str3;
	str3 = 'a';
	cout << str3 << endl;
	
	string str4;
	str4.assign(str1);
	cout << str4 << endl;

	string str5;
	str5.assign(str1, 2);
	cout << str5 << endl;

	string str6;
	str6.assign(8,'a');
	cout << str6 << endl;


}

int main()
{
	 //test01();
	test02();
	return 0;
}