#if 0
#include <iostream>
#include <string>
using namespace std;

//1.����
void test1()
{
	string s1;//����յ�string�����
	string s2("hehe");//��C��ʽ�ַ�������string�����
	string s3(s2);//��������
	cout << s2<<" "<< s3<<" "<< endl;
}

//2.����
void test2()
{
	string s1("Standard Template Library");
	cout << s1.size() << endl;//�����ַ�����Ч����
	cout << s1.capacity() << endl;//�����ַ�������
	cout << s1.empty() << endl;//�ж��ַ����Ƿ�Ϊ��,��Ϊtrue,��Ϊfalse 
	//����ַ���,��size��0,��������
	s1.clear();
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
}

//3.��ֵ
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

//4.����
void test4()
{
	string s1("ABCDEFGHIJKLMN");
	cout << s1[0] << endl;
	cout << s1[1] << endl;
	cout << s1[2] << endl;
	cout << s1[3] << endl;
}

//5.׷��
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

//6.��
void test6()
{
	string s1;
	s1 = "ABCDEFG";
	s1.insert(s1.end(), 'H');//�ڵ�������ʾ��λ�ò���һ���ַ�
	cout << s1 << endl;
	s1.insert(0, "ABCDEFG");//��ָ��λ�ò���һ���ַ���,�ڸ�ԭλ��Ԫ��֮ǰ
	cout << s1 << endl;
	s1.push_back('I');//β��
	cout << s1 << endl;


}

//7.ɾ
void test7()
{
	string s1;
	s1 = "HTTP/TCP/IP";
	s1.erase(10);//ɾ��λ��Ϊ10��Ԫ��(P)
	cout << s1 << endl;
	s1.erase(4, 9);//ɾ��λ��4~9��Ԫ��(/TCP/IP)
	cout << s1 << endl;
	s1.pop_back();//βɾ
	cout << s1 << endl;

}
//8.��
void test8()
{
	string s1;
	s1 = "GET/POST/PUT/HEAD/DELETE";
	cout << s1.find('P', 0) << endl;//���ش�ָ��λ�ÿ�ʼ�����ַ�P��һ�γ������ַ����е�λ��
	cout << s1.find("PUT", 0) << endl;//���ش�ָ��λ�ÿ�ʼ�����ַ���PUT��һ�γ������ַ����е�λ��
}
//9.��
void test9()
{
	string s1("hehe");
	string s2("haha");
	s1.replace(0, s2.size(),s2);//��s2�е�4���ַ��滻s1�ַ����е��ַ�,�����λ�ÿ�ʼ
	cout << s1 << endl;

}
//10.�Ƚ�
void test10()
{
	string s1("ABC");
	string s2("ACB");
	//����ֵ����0,s1>s2
	//����ֵ����0,s1=s2
	//����ֵС��0,s1<s2
	cout<<s1.compare(s2)<<endl;
}

//11.����
void test11()
{
	string s1("hehe");
	string s2("haha");
	s1.swap(s2);
	cout << s1 << endl;
	cout << s2 << endl;
}

//12.�Ӵ�
void test12()
{
	string s1("1ABC");
	string s2;
	s2 = s1.substr(1);//���ش�λ��1������ַ���
	cout << s2 << endl;
}

//13.���õ����������ַ���
void test13()
{
	string s1("ABCDEFG");
	string::iterator begin = s1.begin();//ָ���ַ�����һ��Ԫ��
	string::iterator end = s1.end();//ָ���ַ���ĩβ,���һ��Ԫ�ص���һ��λ��
	string::const_reverse_iterator rbegin = s1.rbegin();//ָ���ַ������Ԫ��
	string::const_reverse_iterator rend = s1.rend();//ָ���ַ�����ͷ,��һ��Ԫ��ǰһ��λ��
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