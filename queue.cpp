#include <iostream>
#include <queue>
using std::cout;
using std::endl;
using std::queue;

void test01()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty())
	{
		cout << "front: " << q.front() <<"  "<<"back: " << q.back() << endl;
		q.pop();
	}

	cout << q.size() << endl;
}

int main()
{
	test01();
	return 0;
}
