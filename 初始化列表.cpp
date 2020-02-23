#include <iostream>

class Test
{
public:
	//传统方式
	//Test(int a, int b, int c)
	//{
	//	_a = a;
	//	_b = b;
	//	_c = c;
	//}
	//初始化列表
	Test(int a, int b, int c) :	_a(a),_b(b),_c(c)
	{}
	int _a;
	int _b;
	int _c;

};
int main()
{
	Test t(10, 20, 30);
	std::cout << t._a<<" " << t._b << " " <<t._c << std::endl;
	return 0;
}