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

#if 0
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
#endif

#if 0
//ͬ����Ա����
class Base
{
public:
	void func()
	{
		std::cout << "Base::func()����" << std::endl;
	}

	void func(int b)
	{
		std::cout << "Base::func(int b)����" << std::endl;
	}
	int _a;

};

class Drive:public Base
{
public:
	void func()
	{
		std::cout << "Drive::func()����" << std::endl;
	}

	int _a;
};

void test4()
{
	Drive d;
	d.func();
	//����Ҫ���ʸ���ͬ����Աʱ,��Ҫ���Ϻ�������ǰ������
	d.Base::func();
	d.Base::_a;

	//����ͬ����Ա�����ظ���������ͬ������,������������
	//���ʸ�����ͬ�����ұ����صĺ���,ͬ����Ҫ��������
	//ͬ����̬��Ա����Ҳ��ͬ���Ĵ���ʽ
	d.Base::func(10);
}
#endif

//��̳��� �����ຬ����ͬ���Ƶĳ�Ա�ڵ���ʱ��Ҫ��������
class Base1
{
public:
	Base1()
	{
		_a = 10;
	}
public:
	int _a;

};

class Base2
{
public:
	Base2()
	{
		_a = 10;
		_b = 20;
	}
public:
	int _a;
	int _b;

};

class Drive:public Base1,public Base2
{
public:
	Drive()
	{
		_c = 30;
	}
public:
	int _c;

};

void test5()
{
	Drive d;
	std::cout <<d.Base1::_a << std::endl;
	std::cout << d.Base2::_a << std::endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}