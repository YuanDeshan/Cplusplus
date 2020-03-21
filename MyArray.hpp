#pragma once
#include <iostream> 
#include <string>
using std::cout;
using std::endl;
using std::string;

template <class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		//cout << "Test:MyArray�вι���" << endl;
		this->_capacity = capacity;
		this->_size = 0;
		this->pArray = new T[_capacity];
	}

	//��������
	MyArray(const MyArray &Arr)
	{
		//cout << "Test:MyArray��������" << endl;
		this->_capacity = Arr._capacity;
		this->_size = Arr._size;

		//���
		this->pArray = new T[Arr._capacity];
		//��������
		for (int i = 0; i < _size; ++i)
		{
			this->pArray[i] = Arr.pArray[i];
		}

	}


	//operator= ��ֹǳ����
	MyArray& operator=(const MyArray& Arr)
	{
		//cout << "Test:MyArray��ֵ���������" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pArray != NULL)
		{
			delete[] pArray;
			this->pArray = NULL;
			this->_capacity = 0;
			this->_size = 0;
		}

		//���
		this->_capacity = Arr._capacity;
		this->_size = Arr._size;
		this->pArray = new T[Arr._capacity];
		for (int i = 0; i < _size; ++i)
		{
			this->pArray[i] = Arr.pArray[i];
		}
		return *this;
	}

	//β�巨
	void PushBack(const T& val)
	{
		if (this->_size == this->_capacity)
		{
			cout << "��������" << endl;
			return;
		}
		this->pArray[_size] = val;
		this->_size++;
	}


	//βɾ��
	void PopBack()
	{
		if (this->_size == 0)
		{
			cout << "�����ѿ�" << endl;
			return;
		}
		this->_size--;
	}

	//ͨ���±����Ԫ��
	T& operator[](int index)
	{
		return this->pArray[index];
	}

	//������������
	int GetCapacity()
	{
		return this->_capacity;
	}

	//���������С
	int GetSize()
	{
		return this->_size;
	}

	~MyArray()
	{
		//cout << "Test:MyArray��������" << endl;
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