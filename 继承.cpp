#include <iostream>

#if 0
class Basephone
{
public:
	void Ringup()
	{
		std::cout << "打电话" << std::endl;
	}
	void Listenmusic()
	{
		std::cout << "听音乐" << std::endl;
	}
	void Movies()
	{
		std::cout << "看电影" << std::endl;
	}
	void Game()
	{
		std::cout << "打游戏" << std::endl;
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
//继承中的对象模型
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
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有属性 是被编译器给隐蔽了 因此是访问不到的 但还是被继承了
	std::cout << sizeof(d) << std::endl;

}
#endif

//继承中子类和父类的构造和析构顺序
class Base
{
public:
	Base()
	{
		std::cout << "Base构造函数" << std::endl;
	}

	~Base()
	{
		std::cout << "Base析构函数" << std::endl;
	}
};

class Drive:public Base
{
public:
	Drive()
	{
		std::cout << "Drive构造函数" << std::endl;
	}

	~Drive()
	{
		std::cout << "Drive析构函数" << std::endl;
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