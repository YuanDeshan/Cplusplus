#include "MyArray.hpp"

void test01()
{
	//�вι������
	MyArray<int> arr1(10);
	//�����������
	MyArray<int> arr2(arr1);
	//��ֵ���������
	MyArray<int> arr3(10);
	arr3 = arr1;
}

void test02()
{
	MyArray<int> arr(5);
	for (int i = 0; i < 5; ++i)
	{
		arr.PushBack(i + 10);
	}
	cout << arr.GetCapacity() << endl;;
	cout << arr.GetSize() << endl;;

	arr.PopBack();
	cout << arr.GetSize() << endl;;

	cout << arr[3] << endl; 
}

class Person
{
public:
	Person()
	{}
	Person(string name, int age)
	{
		this->_name = name;
		this->_age = age;
	}
public:
	string _name;
	int _age;
};

void test03()
{
	MyArray<Person> arr(5);
	Person p1("�����",999);
	arr.PushBack(p1);
	cout << arr[0]._name << endl;
	cout << arr[0]._age << endl;
}


int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}