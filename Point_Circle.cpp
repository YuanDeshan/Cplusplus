#include <iostream>

//点类
class Point
{
public:
	//设置x
	void Setx(int x)
	{
		_x = x;
	}
	//获取x
	int Getx()
	{
		return _x;
	}
	//设置y
	void Sety(int y)
	{
		_y = y;
	}
	//获取y
	int Gety()
	{
		return _y;
	}
private:
	int _x;//横坐标
	int _y;//纵坐标
};
//圆类
class Circle
{
public:
	//设置半径
	void Setr(int r)
	{
		_r = r;
	}
	//获取半径
	int Getr()
	{
		return _r;
	}
	//设置圆心
	void Setcenter(Point center)
	{
		_center = center;
	}
	//获取圆心
	Point Getcenter()
	{
		return _center;
	}

private:
	int _r;
	Point _center;
};
//判断点和圆的关系
void Judge(Point &p, Circle &c)
{
	//两点之间距离的平方
	int Distance = (c.Getcenter().Getx() - p.Getx())*(c.Getcenter().Getx() - p.Getx())
		         + (c.Getcenter().Gety() - p.Gety())*(c.Getcenter().Gety() - p.Gety());
	//半径的平方
	int rDistance = c.Getr()*c.Getr();
	//判断关系
	if (Distance == rDistance)
	{
		std::cout << "点在圆上" << std::endl;
	}
	else if (Distance > rDistance)
	{
		std::cout << "点在圆外" << std::endl;
	}
	else
	{
		std::cout << "点在圆内" << std::endl;
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