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