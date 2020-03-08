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

#if 0
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
#endif

#if 0
//同名成员处理
class Base
{
public:
	void func()
	{
		std::cout << "Base::func()调用" << std::endl;
	}

	void func(int b)
	{
		std::cout << "Base::func(int b)调用" << std::endl;
	}
	int _a;

};

class Drive:public Base
{
public:
	void func()
	{
		std::cout << "Drive::func()调用" << std::endl;
	}

	int _a;
};

void test4()
{
	Drive d;
	d.func();
	//当需要访问父类同名成员时,需要加上函数调用前作用域
	d.Base::func();
	d.Base::_a;

	//子类同名成员会隐藏父类中所有同名函数,包括函数重载
	//访问父类中同名并且被重载的函数,同样需要加作用域
	//同名静态成员函数也是同样的处理方式
	d.Base::func(10);
}
#endif

//多继承中 当父类含有相同名称的成员在调用时需要加作用域
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