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
		std::cout << "1.��ˮ" << std::endl;
	}

	virtual void ChargingFeed()
	{
		std::cout << "2.����ԭ��" << std::endl;
	}

	virtual void PourInCup()
	{
		std::cout << "3.���뱭��" << std::endl;
	}

	virtual void AddOther()
	{
		std::cout << "4.����ţ�̺Ͱ���" << std::endl;
	}

};

class Tea:public AbstractDrinking
{
public:
	virtual void  Boil()
	{
		std::cout << "1.��ˮ" << std::endl;
	}

	virtual void ChargingFeed()
	{
		std::cout << "2.�����Ҷ" << std::endl;
	}

	virtual void PourInCup()
	{
		std::cout << "3.���뱭��" << std::endl;
	}

	virtual void AddOther()
	{
		std::cout << "4.��������" << std::endl;
	}

};

//����һ������ָ��,�û���ָ��ָ���������,����������̳л���ĺ���
void DoWork(AbstractDrinking * ad)
{
	ad->MakeDrinking();
	delete ad;//һ���ǵ�����
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