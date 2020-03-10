#include <iostream>

class AbstractDrinking
{
public:
	//1.��ˮ
	virtual void Boil() = 0;

	//2.����ԭ��
	virtual void ChargingFeed() = 0;

	//3.���뱭��
	virtual void PourInCup() = 0;

	//4.�Ӹ��Ͻ���
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
		std::cout << "��ˮ" << std::endl;
	}

	virtual void ChargingFeed()
	{
		std::cout << "����ԭ��" << std::endl;
	}

	virtual void PourInCup()
	{
		std::cout << "���뱭��" << std::endl;
	}

	virtual void AddOther()
	{
		std::cout << "��Ӹ���" << std::endl;
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