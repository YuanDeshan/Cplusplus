#include <iostream>

#if 0
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
#endif

#if 0
//�̳��еĶ���ģ��
class Base
{
public:
	int _a;
protected:
	int _b;
private:
	int _c;
};

class Drive:public Base
{
public:
	int _d;
};

void test2()
{
	Drive d;
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽������ �Ǳ��������������� ����Ƿ��ʲ����� �����Ǳ��̳���
	std::cout << sizeof(d) << std::endl;

}
#endif

//�̳�������͸���Ĺ��������˳��
class Base
{
public:
	Base()
	{
		std::cout << "Base���캯��" << std::endl;
	}

	~Base()
	{
		std::cout << "Base��������" << std::endl;
	}
};

class Drive:public Base
{
public:
	Drive()
	{
		std::cout << "Drive���캯��" << std::endl;
	}

	~Drive()
	{
		std::cout << "Drive��������" << std::endl;
	}
};

void test3()
{
	Drive d;
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}