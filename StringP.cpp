#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

//string���캯��
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

//��ֵ����
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