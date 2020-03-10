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
		std::cout << "烧水" << std::endl;
	}

	virtual void ChargingFeed()
	{
		std::cout << "加入原料" << std::endl;
	}

	virtual void PourInCup()
	{
		std::cout << "倒入杯中" << std::endl;
	}

	virtual void AddOther()
	{
		std::cout << "添加辅料" << std::endl;
	}

};

void DoWork(AbstractDrinking * ad)
{
	ad->MakeDrinking();
	delete ad;
}

void test01()
{
	DoWork(new Coffee);
}

int main()
{
	test01();
	return 0;
}