#include <iostream>

//����
class Point
{
	//����x
	void Setx(int x)
	{
		_x = x;
	}
	//��ȡx
	int Getx()
	{
		return _x;
	}
	//����y
	void Sety(int y)
	{
		_y = y;
	}
	//��ȡy
	int Gety()
	{
		return _y;
	}
private:
	int _x;//������
	int _y;//������
};
//Բ��
class Circle
{
private:
	int _r;
	Point center;
};
int main()
{

	return 0;
}