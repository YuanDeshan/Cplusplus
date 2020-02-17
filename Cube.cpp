#include <iostream>

//1.����һ��������
//2.��ȡ���������������
//3.�ֱ��ó�Ա������ȫ�ֺ����ж������������Ƿ���ͬ
class Cube
{
public:
	//���ó�
	void SetL(int L)
	{
		_L = L;
	}
	//��ȡ��
	int GetL()
	{
		return _L;
	}
	//���ÿ�
	void SetW(int W)
	{
		_W = W;
	}
	//��ȡ��
	int GetW()
	{
		return _W;
	}
	//���ø�
	void SetH(int H)
	{
		_H = H;
	}
	//��ȡ��
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
	int _L; //��
	int _W; //��
	int _H; //��
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
	std::cout << "c1������ǣ�" << c1.CalculateS() << std::endl;
	std::cout << "c1������ǣ�" << c1.CalculateV() << std::endl;

	Cube c2;
	c2.SetL(10);
	c2.SetW(10);
	c2.SetH(10);
	//bool ret = c1.IsSame(c2);
	bool ret = Issame(c1,c2);
	if (ret)
	{
		std::cout << "c1��c2��ͬ��" << std::endl;
	}
	else
	{
		std::cout << "c1��c2����ͬ��" << std::endl;
	}
	return 0;
}