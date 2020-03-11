#include <iostream>

class AbstractDrinking
{
public:
	//1.烧水
	virtual void Boil() = 0;

	//2.加入原料
	virtual void ChargingFeed() = 0;

	//3.倒入杯中
	virtual void PourInCup() = 0;

	//4.加辅料搅拌
	virtual void AddOther() = 0;

	void MakeDrinking()
	{
		Boil();
		ChargingFeed();
		PourInCup();
		AddOther();
	}
};

class Coffee:public AbstractDrinking
{
public:
	virtual void Boil()
	{
		std::cout << "1.烧水" << std::endl;
	}

	virtual void ChargingFeed()
	{
		std::cout << "2.加入原料" << std::endl;
	}

	virtual void PourInCup()
	{
		std::cout << "3.倒入杯中" << std::endl;
	}

	virtual void AddOther()
	{
		std::cout << "4.加入牛奶和白糖" << std::endl;
	}

};

class Tea:public AbstractDrinking
{
public:
	virtual void  Boil()
	{
		std::cout << "1.烧水" << std::endl;
	}

	virtual void ChargingFeed()
	{
		std::cout << "2.加入茶叶" << std::endl;
	}

	virtual void PourInCup()
	{
		std::cout << "3.倒入杯中" << std::endl;
	}

	virtual void AddOther()
	{
		std::cout << "4.加入柠檬" << std::endl;
	}

};

//创建一个基类指针,用基类指针指向子类对象,并调用子类继承基类的函数
void DoWork(AbstractDrinking * ad)
{
	ad->MakeDrinking();
	delete ad;//一定记得销毁
}

void test01()
{
	DoWork(new Coffee);
	std::cout << "=================" << std::endl;
	DoWork(new Tea);
}

int main()
{
	test01();
	return 0;
}