#if 0
#include <iostream>

int* creat_memory()
{
	int *p = new int(10);
	return p;
}

void Print()
{
	int* p = creat_memory();
	std::cout << *p << std::endl;
	std::cout << *p << std::endl;
	//delete p;
	std::cout << *p << std::endl;
}

void creat_array()
{
	int* arr = new int[10];
	for (int i = 0; i < 5; ++i)
	{
		arr[i] = i;
    }
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
}

int main()
{
	//Print();
	creat_array();
	system("pause");
	return 0;
}
#endif