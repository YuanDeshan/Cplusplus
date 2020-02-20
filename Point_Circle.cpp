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
	//����֮������ƽ��
	int Distance = (c.Getcenter().Getx() - p.Getx())*(c.Getcenter().Getx() - p.Getx())
		         + (c.Getcenter().Gety() - p.Gety())*(c.Getcenter().Gety() - p.Gety());
	//�뾶��ƽ��
	int rDistance = c.Getr()*c.Getr();
	//�жϹ�ϵ
	if (Distance == rDistance)
	{
		std::cout << "����Բ��" << std::endl;
	}
	else if (Distance > rDistance)
	{
		std::cout << "����Բ��" << std::endl;
	}
	else
	{
		std::cout << "����Բ��" << std::endl;
	}
}
int main()
{
	Point p1;
	p1.Setx(0);
	p1.Sety(9);

	Point p2;
	p2.Setx(0);
	p2.Sety(0);

	Circle c1;
	c1.Setcenter(p2);
	c1.Setr(10);

	Judge(p1, c1);
	return 0;
}