#include <iostream>

class AbsractCalcalator
{
public:
	virtual int GetResult()
	{
		return 0;
	}
public:
	int _num1;
	int _num2;
};

class AddCalculator:public AbsractCalcalator
{
public:
	int GetResult()
	{
		return _num1 + _num2;
	}
};

class SubCalculator :public AbsractCalcalator
{
public:
	int GetResult()
	{
		return _num1 - _num2;
	}
};

class MulCalculator :public AbsractCalcalator
{
public:
	int GetResult()
	{
		return _num1 * _num2;
	}
};

class DivCalculator :public AbsractCalcalator
{
public:
	int GetResult()
	{
		return _num1 / _num2;
	}
};

void test1()
{
	AddCalculator add;
	add._num1 = 10;
	add._num2 = 20;
	std::cout << add.GetResult() << std::endl;

	SubCalculator sub;
	sub._num1 = 40;
	sub._num2 = 10;
	std::cout << sub.GetResult() << std::endl;

	MulCalculator mul;
	mul._num1 = 5;
	mul._num2 = 6;
	std::cout << mul.GetResult() << std::endl;

	DivCalculator div;
	div._num1 = 120;
	div._num2 = 4;
	std::cout << div.GetResult() << std::endl;
}

int main()
{
	test1();
	return 0;
}