#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

//string������һ���࣬�乹�췽ʽ�����¼��֣�
//1.string(); ����һ���յ��ַ�����
//2.string(const char* s); ʹ���ַ���s��ʼ��
//3.string(const string&str); ʹ��һ��string�����ʼ����һ��string����
//3.string(int n,char c); ʹ��n���ַ�c��ʼ��
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