#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

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

int main()
{
	 test01();
	return 0;
}