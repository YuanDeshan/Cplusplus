#if 0
#include <iostream>
#include <string>
using namespace std;

//1.构造
void test1()
{
	string s1;//构造空的string类对象
	string s2("hehe");//用C格式字符串构造string类对象
	string s3(s2);//拷贝构造
	cout << s2<<" "<< s3<<" "<< endl;
}

//2.容量
void test2()
{
	string s1("Standard Template Library");
	cout << s1.size() << endl;//返回字符串有效长度
	cout << s1.capacity() << endl;//返回字符串容量
	cout << s1.empty() << endl;//判断字符串是否为空,是为true,否为false 
	//清空字符串,将size置0,容量不变
	s1.clear();
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
}

//3.赋值
void test3()
{
	string s1;
	string s2(" CentOS");
	string s3;
	s1 = "Operate System";
	s3 += s1;
	cout << s3 << endl;
	s3 = s1 + s2;
	cout << s3 << endl;
}

//4.访问
void test4()
{
	string s1("ABCDEFGHIJKLMN");
	cout << s1[0] << endl;
	cout << s1[1] << endl;
	cout << s1[2] << endl;
	cout << s1[3] << endl;
}

//5.追加
void test5()
{
	string s1;
	string s2;
	s1 = "Processing ";
	s1.append("Control Block ");
	cout << s1 << endl;
	s1.append(3, '6');
	cout << s1 << endl;
}

//6.增
void test6()
{
	string s1;
	s1 = "ABCDEFG";
	s1.insert(s1.end(), 'H');//在迭代器表示的位置插入一个字符
	cout << s1 << endl;
	s1.insert(0, "ABCDEFG");//在指定位置插入一个字符串,在该原位置元素之前
	cout << s1 << endl;
	s1.push_back('I');//尾插
	cout << s1 << endl;


}

//7.删
void test7()
{
	string s1;
	s1 = "HTTP/TCP/IP";
	s1.erase(10);//删除位置为10的元素(P)
	cout << s1 << endl;
	s1.erase(4, 9);//删除位置4~9的元素(/TCP/IP)
	cout << s1 << endl;
	s1.pop_back();//尾删
	cout << s1 << endl;

}
//8.查
void test8()
{
	string s1;
	s1 = "GET/POST/PUT/HEAD/DELETE";
	cout << s1.find('P', 0) << endl;//返回从指定位置开始查找字符P第一次出现在字符串中的位置
	cout << s1.find("PUT", 0) << endl;//返回从指定位置开始查找字符串PUT第一次出现在字符串中的位置
}
//9.改
void test9()
{
	string s1("hehe");
	string s2("haha");
	s1.replace(0, s2.size(),s2);//用s2中的4个字符替换s1字符串中的字符,从零号位置开始
	cout << s1 << endl;

}
//10.比较
void test10()
{
	string s1("ABC");
	string s2("ACB");
	//返回值大于0,s1>s2
	//返回值等于0,s1=s2
	//返回值小于0,s1<s2
	cout<<s1.compare(s2)<<endl;
}

//11.交换
void test11()
{
	string s1("hehe");
	string s2("haha");
	s1.swap(s2);
	cout << s1 << endl;
	cout << s2 << endl;
}

//12.子串
void test12()
{
	string s1("1ABC");
	string s2;
	s2 = s1.substr(1);//返回从位置1后面的字符串
	cout << s2 << endl;
}

//13.利用迭代器遍历字符串
void test13()
{
	string s1("ABCDEFG");
	string::iterator begin = s1.begin();//指向字符串第一个元素
	string::iterator end = s1.end();//指向字符串末尾,最后一个元素的下一个位置
	string::const_reverse_iterator rbegin = s1.rbegin();//指向字符串最后元素
	string::const_reverse_iterator rend = s1.rend();//指向字符串开头,第一个元素前一个位置
	while (begin != end)
	{
		cout << *begin;
		++begin;
	}
	cout << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	//test9();
	//test10();
	//test11();
	//test12();
	test13();
	return 0;
}
#endif