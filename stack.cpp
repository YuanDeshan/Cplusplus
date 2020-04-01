#include <iostream>
#include <stack>
using std::endl;
using std::cout;
using std::stack;

void test01()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while (!s.empty())
	{
		cout << "top: " << s.top() << endl;
		s.pop();
	}

	cout << s.size() << endl;

}
int main()
{
	test01();
	return 0;
}