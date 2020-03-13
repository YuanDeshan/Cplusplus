#include <iostream>
using std::cout;
using std::endl;

//��������ģ��
template <class T>
void Myswap(T& left, T& right)
{
	T temp=left;
	left = right;
	right = temp;

}
//ѡ������ģ��
template <class T>
void Mysort(T Arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		int max = i;
		for (int j = i + 1; j < len; ++j)
		{
			if (Arr[max] < Arr[j])
				max = j;
		}
		if (max != i)
		{
			Myswap(Arr[max], Arr[i]);
		}
	}
}

//��ӡ����ģ��
template <class T>
void Myprint(T Arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char Str[] = "bdafechg";
	int Slen = sizeof(Str) / sizeof(char);
	Mysort(Str, Slen);
	Myprint(Str, Slen);
}

void test02()
{
	int Arr[] = { 9,6,4,5,3,7,8,1,2,0 };
	int Alen = sizeof(Arr) / sizeof(int);
	Mysort(Arr, Alen);
	Myprint(Arr, Alen);
}
int main()
{
	test01();
	test02();
	return 0;
}