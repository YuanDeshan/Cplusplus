#include <iostream>

class Basephone
{
public:
	void Ringup()
	{
		std::cout << "��绰" << std::endl;
	}
	void Listenmusic()
	{
		std::cout << "������" << std::endl;
	}
	void Movies()
	{
		std::cout << "����Ӱ" << std::endl;
	}
	void Game()
	{
		std::cout << "����Ϸ" << std::endl;
	}
};

class vivo:public Basephone
{
public:
	void vivophone()
	{
		std::cout << "vivo" << std::endl;
	}

};

class huawei :public Basephone
{
public:
	void huaweiphone()
	{
		std::cout << "huawei" << std::endl;
	}
};
	
class xiaomi :public Basephone
{
public:
	void xiaomiphone()
	{
		std::cout << "xiaomi" << std::endl;
	}
};

void test1()
{
	vivo vi;
	vi.Game();
	vi.Listenmusic();
	vi.Movies();
	vi.Ringup();
	vi.vivophone();
	
	std::cout << "=============" << std::endl;

	huawei hw;
	hw.Game();
	hw.Listenmusic();
	hw.Movies();
	hw.Ringup();
	hw.huaweiphone();

	std::cout << "=============" << std::endl;
	
	xiaomi xm;
	xm.Game();
	xm.Listenmusic();
	xm.Movies();
	xm.Ringup();
	xm.xiaomiphone();
}

int main()
{
	test1();
	return 0;
}