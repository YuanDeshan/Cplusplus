#include <iostream>
using std::cout;
using std::endl;
//Ä£°å
template <class T>
void Swap(T& a, T& b)
{
	T Temp = a;
	a = b;
	b = Temp;
}
int main()
{
	int a = 10;
	int b = 20;
	double c = 1.0;
	double d = 2.0;
	Swap<int>(a, b);
	Swap<double>(c, d);
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	return 0;
}
