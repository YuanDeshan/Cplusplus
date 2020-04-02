#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator lit = L.begin(); lit != L.end(); ++lit)
	{
		cout << *lit << " ";
	}
	cout << endl;
}

//list���캯��
void test01()
{
	//1.Ĭ�Ϲ���
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(5);
	PrintList(L1);

	//2.��������
	list<int> L2(L1);
	PrintList(L2);
	
	//3.���乹��
	list<int> L3(L1.begin(), L1.end());
	PrintList(L3);

	//4.n��elem����
	list<int> L4(5, 999);
	PrintList(L4);
}

int main()
{
	test01();
	return 0;
}