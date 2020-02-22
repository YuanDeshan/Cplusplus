#include <iostream>

class Person
{
public:
	Person()
	{
		std::cout << "默认构造函数" << std::endl;
	}
	Person(int age, int ID)
	{
		std::cout << "有参构造函数" << std::endl;
		_age = age;
		_ID = new int(ID);
	}
	Person(const Person &p)
	{
		//编译器的默认拷贝构造函数会如下:
		_age = p._age;
		//_ID = p._ID;//由于ID是指针,其空间在堆上
		//修改后
		//重新开辟一段空间用来存储拷贝过来的值
		//这样p2和p1就不会释放相同的空间
		_ID = new int(*p._ID);
	}
	~Person()
	{
		if (_ID != NULL)
		{
			delete _ID;
			_ID = NULL;
		}
		std::cout << "析构函数" << std::endl;
	}
	int _age;
	int* _ID;
};

//拷贝构造为浅拷贝,如果使用编译器默认的拷贝构造函数,p2将p1拷贝之后,
//他们ID的地址是相同的当p2调用析构函数释放空间后,p1再次进行释放该空间就会出错
//因此浅拷贝的问题在于重复释放堆空间会出错
//解决方法:自己重新构建拷贝构造函数
void test1()
{
	Person p1(18,9999);
	std::cout << "年龄为: " << p1._age << " ID为: " << *p1._ID << std::endl;

	Person p2(p1);
	std::cout << "年龄为: " << p2._age << " ID为: " << *p2._ID << std::endl;

}
int main()
{
	test1();
	return 0;
}