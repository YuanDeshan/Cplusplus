#include <iostream>

//����
class Point
{
public:
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
public:
	//���ð뾶
	void Setr(int r)
	{
		_r = r;
	}
	//��ȡ�뾶
	int Getr()
	{
		return _r;
	}
	//����Բ��
	void Setcenter(Point center)
	{
		_center = center;
	}
	//��ȡԲ��
	Point Getcenter()
	{
		return _center;
	}

private:
	int _r;
	Point _center;
};
//�жϵ��Բ�Ĺ�ϵ
void Judge(Point &p, Circle &c)
{
	if()
}
int main()
{
	Point p1;
	p1.Setx(11);
	p1.Sety(11);

	Circle c1;
	c1.Setcenter(p1);
	c1.Setr(10);

	return 0;
}