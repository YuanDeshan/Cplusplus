#if 0
#include <iostream>

void test0()
{
	int a = 10;
	int &b = a;
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	b = 100;
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
}
void test1()
{
	int a = 10;
	//int &b;//����
	int &b = a;//����ʱ�����ʼ��
	//�����ڳ�ʼ���󣬲��ܷ����ı�
	int c = 20;
	b = c;//���Ǹ�ֵ�����������Ǹ�������

	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cout << "c=" << c << std::endl;
}

int main()
{
	//test0();
	test1();
	return 0;
}
#endif

#if 0
#include <iostream>

//��������
//1.ֵ����
void Swap1(int left, int right)
{
	left = right ^ left;
	right = right ^ left;
	left = left ^ right;
}
//2.��ַ����
void Swap2(int* left, int* right)
{
	(*left) = (*left) ^ (*right);
	(*right) = (*right) ^ (*left);
	(*left) = (*left) ^ (*right);
}
//3.���ô���
void Swap3(int &left,int &right)
{
	left = right ^ left;
	right = right ^ left;
	left = left ^ right;
}
int main()
{
	int a = 10;
	int b = 20;
	//Swap1(a, b);
	//Swap2(&a, &b);
	Swap3(a, b);
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	return 0;
}

#endif 

#if 0
#include <iostream>

//1.���ܷ��ؾֲ���������
int& Fun1()
{
	int a = 10;  //�ֲ�����λ��ջ�ϣ��������ú��Զ�����
	return a;
}
//2.����������Ϊ��ֵ
int& Fun2()
{
	static int a = 10;//��̬����λ��ȫ�����������������ϵͳ�ͷ�
	return a;
}
int main()
{
	//int &b0 = Fun1();
	int &b1 = Fun2();
	std::cout << "b1=" << b1<< std::endl;
	std::cout << "b1=" << b1 << std::endl;
	Fun2() = 100;//����������Ϊ��ֵ
	std::cout << "b1=" << b1 << std::endl;
	std::cout << "b1=" << b1 << std::endl;

	//std::cout << "b0=" << b0 << std::endl;//���������˱���
	//std::cout << "b0=" << b0 << std::endl;//�������
	return 0;
}
#endif

#if 0
#include <iostream>

int main()
{
	int a = 10;
	int &b = a;//�Զ�ת��Ϊint* const b=&a,ָ�볣��ָ��ָ���ܸģ��������ò��ɸ�
	b = 20;//�Զ�ת��Ϊ *b=20��
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	return 0;
}
#endif
#if 0
#include <iostream>

void Print(const int &v)
{
	//v = 100;//��С�ı��޸�
	std::cout << "v=" << v << std::endl;
}
int main()
{
	//int &b = 10;//����д��
	const int &b = 10;//�Զ�ת��Ϊint temp=10��const int &b=temp
	//b=20��//���󣬲��ɸ���

	int v = 10;
	Print(v);

	return 0;
}
#endif


 


