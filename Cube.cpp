#include <iostream>

//1.创建一个立方体
//2.求取立方体的面积和体积
//3.分别用成员函数和全局函数判断两个立方体是否相同
class Cube
{
public:
	//设置长
	void SetL(int L)
	{
		_L = L;
	}
	//获取长
	int GetL()
	{
		return _L;
	}
	//设置宽
	void SetW(int W)
	{
		_W = W;
	}
	//获取宽
	int GetW()
	{
		return _W;
	}
	//设置高
	void SetH(int H)
	{
		_H = H;
	}
	//获取高
	int GetH()
	{
		return _H;
	}
	int CalculateS()
	{
		return 2 * _L*_W + 2 * _L*_H + 2 * _W*_H;
	}
	int CalculateV()
	{
		return _L * _H*_W;
	}
	bool IsSame(Cube &c)
	{
		if (_L == c.GetL() && _W == c.GetW() && _H == c.GetH())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int _L; //长
	int _W; //宽
	int _H; //高
};

bool Issame(Cube &c1, Cube &c2)
{
	if (c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW() && c1.GetH() == c2.GetH())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Cube c1;
	c1.SetL(10);
	c1.SetW(10);
	c1.SetH(10);
	std::cout << "c1的面积是：" << c1.CalculateS() << std::endl;
	std::cout << "c1的体积是：" << c1.CalculateV() << std::endl;

	Cube c2;
	c2.SetL(10);
	c2.SetW(10);
	c2.SetH(10);
	//bool ret = c1.IsSame(c2);
	bool ret = Issame(c1,c2);
	if (ret)
	{
		std::cout << "c1和c2相同！" << std::endl;
	}
	else
	{
		std::cout << "c1和c2不相同！" << std::endl;
	}
	return 0;
}