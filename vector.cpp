#if 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1.����
void test1()
{
	vector<int> v1;//����һ���յ�vector<int>����
	vector<int> v2(5,1);//����һ��vector<int>����,����ʼ��5��1
	vector<int> v3(v2);//��������
}

//2.���õ�������ӡ
void test2()
{
	vector<int> v1;
	vector<int> v2(5,6);
	vector<int> v3(v2);
	vector<int>::iterator it;
	//v3.begin():ָ��v3�ĵ�һ��Ԫ��
	//v3.end():ָ��v3��ĩβ,���һ��Ԫ�ص���һ��λ��
	for (it = v3.begin(); it != v3.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<int>::const_reverse_iterator rit;
	//v3.rbegin():ָ��v3��ͷ,��һ��Ԫ�ص�ǰһ��λ��
	//v3.rend():ָ��v3�����һ��Ԫ��
	for (rit = v3.rbegin(); rit != v3.rend(); ++rit)
	{
		cout << *rit << " ";
	}
	cout << endl;

}

//3.����
void test3()
{
	vector<int> v1(5,6);
	cout << v1.size() << " "<<v1.capacity() << endl;
	cout << v1.empty() << endl;
}

//4.��
void test4()
{
	vector<int> v1;
	v1.push_back(0);//β��
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	for (int i = 0; i <(int) v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int>::iterator pos = v1.begin() + 1;//posָ���±�Ϊ1��Ԫ��
	v1.insert(pos, 6);
	cout << v1[1] << endl;//�ɼ�����posλ��ǰ�����Ԫ��

}

//5.ɾ
void test5()
{
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.pop_back();//βɾ
	for (int i = 0; i <(int) v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int>::iterator pos = v1.begin() + 1;
	v1.erase(pos);//ɾ���±�λ��Ϊ1��Ԫ��
	for (int i = 0; i <(int) v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

//6.��
//find������vector��,����algorithm��
void test6()
{
	vector<int> v1;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it;
	it = find(v1.begin(), v1.end(), 6);
	if (it != v1.end())
	{
		cout << "Find success! " << *it << endl;
	}
	else
	{
		cout << "Find failed!";
	}
}

//7.����
void test7()
{
	vector<int> v1(1,10);
	vector<int> v2(1,20);
	v1.swap(v2);
}

//8.����
void test8()
{
	vector<int> v1;
	for (int i = 0; i < 10; ++i)
	{
		v1.push_back(i);
	}
	cout << v1.front() << endl;
	v1.clear();
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
	test8();
	return 0;
}
#endif