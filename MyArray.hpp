#pragma once
#include <iostream> 
using std::cout;
using std::endl;
using std::string;

template <class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		this->_capacity = capacity;
		this->_size = 0;
		this->pArray = new T[_capacity];
	}


	~MyArray()
	{
		if (this->pArray != NULL)
		{
			delete[] this->pArray;
			this->pArray = NULL;
		}
	}
private:
	T* pArray;  //ָ��ָ��������ٵ���ʵ����
	int _capacity;
	int _size;

};