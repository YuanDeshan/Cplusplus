#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	//��������
	//��һ�ַ�ʽ��
	//vector<int>::iterator itbegin = v.begin();//ָ���һ��Ԫ��
	//vector<int>::iterator itend = v.end();//ָ�����һ��Ԫ�ص���һ��λ��
	//while (itbegin != itend)
	//{
	//	cout << *itbegin << endl;
	//	++itbegin;
	//}

	//�ڶ��ַ�ʽ��
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
}



int main()
{
	test01();
	return 0;
}