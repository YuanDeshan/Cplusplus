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
		//cout << "Test:MyArray有参构造" << endl;
		this->_capacity = capacity;
		this->_size = 0;
		this->pArray = new T[_capacity];
	}

	//拷贝构造
	MyArray(const MyArray &Arr)
	{
		//cout << "Test:MyArray拷贝构造" << endl;
		this->_capacity = Arr._capacity;
		this->_size = Arr._size;

		//深拷贝
		this->pArray = new T[Arr._capacity];
		//拷贝数据
		for (int i = 0; i < _size; ++i)
		{
			this->pArray[i] = Arr.pArray[i];
		}

	}


	//operator= 防止浅拷贝
	MyArray& operator=(const MyArray& Arr)
	{
		//cout << "Test:MyArray赋值运算符重载" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pArray != NULL)
		{
			delete[] pArray;
			this->pArray = NULL;
			this->_capacity = 0;
			this->_size = 0;
		}

		//深拷贝
		this->_capacity = Arr._capacity;
		this->_size = Arr._size;
		this->pArray = new T[Arr._capacity];
		for (int i = 0; i < _size; ++i)
		{
			this->pArray[i] = Arr.pArray[i];
		}
		return *this;
	}

	//尾插法
	void PushBack(const T& val)
	{
		if (this->_size == this->_capacity)
		{
			cout << "数组已满" << endl;
			return;
		}
		this->pArray[_size] = val;
		this->_size++;
	}


	//尾删法
	void PopBack()
	{
		if (this->_size == 0)
		{
			cout << "数组已空" << endl;
			return;
		}
		this->_size--;
	}

	//通过下标访问元素
	T& operator[](int index)
	{
		return this->pArray[index];
	}

	//返回数组容量
	int GetCapacity()
	{
		return this->_capacity;
	}

	//返回数组大小
	int GetSize()
	{
		return this->_size;
	}

	~MyArray()
	{
		//cout << "Test:MyArray析构函数" << endl;
		if (this->pArray != NULL)
		{
			delete[] this->pArray;
			this->pArray = NULL;
		}
	}
private:
	T* pArray;  //指针指向堆区开辟的真实数组
	int _capacity;
	int _size;

};