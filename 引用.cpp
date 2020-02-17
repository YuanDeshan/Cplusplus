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
	//int &b;//错误
	int &b = a;//引用时必须初始化
	//引用在初始化后，不能发生改变
	int c = 20;
	b = c;//这是赋值操作，并不是更改引用

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

//交换函数
//1.值传递
void Swap1(int left, int right)
{
	left = right ^ left;
	right = right ^ left;
	left = left ^ right;
}
//2.地址传递
void Swap2(int* left, int* right)
{
	(*left) = (*left) ^ (*right);
	(*right) = (*right) ^ (*left);
	(*left) = (*left) ^ (*right);
}
//3.引用传递
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

//1.不能返回局部变量引用
int& Fun1()
{
	int a = 10;  //局部变量位于栈上，函数调用后自动销毁
	return a;
}
//2.函数调用作为左值
int& Fun2()
{
	static int a = 10;//静态变量位于全局区，程序结束后由系统释放
	return a;
}
int main()
{
	//int &b0 = Fun1();
	int &b1 = Fun2();
	std::cout << "b1=" << b1<< std::endl;
	std::cout << "b1=" << b1 << std::endl;
	Fun2() = 100;//函数调用作为左值
	std::cout << "b1=" << b1 << std::endl;
	std::cout << "b1=" << b1 << std::endl;

	//std::cout << "b0=" << b0 << std::endl;//编译器做了保留
	//std::cout << "b0=" << b0 << std::endl;//输出乱码
	return 0;
}
#endif

#if 0
#include <iostream>

int main()
{
	int a = 10;
	int &b = a;//自动转换为int* const b=&a,指针常量指针指向不能改，所以引用不可改
	b = 20;//自动转换为 *b=20；
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	return 0;
}
#endif
#if 0
#include <iostream>

void Print(const int &v)
{
	//v = 100;//不小心被修改
	std::cout << "v=" << v << std::endl;
}
int main()
{
	//int &b = 10;//错误写法
	const int &b = 10;//自动转换为int temp=10，const int &b=temp
	//b=20；//错误，不可更改

	int v = 10;
	Print(v);

	return 0;
}
#endif


 


