#include <iostream>

//点类
class Point
{
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
private:
	int _r;
	Point center;
};
int main()
{

	return 0;
}