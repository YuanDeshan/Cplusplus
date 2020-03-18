//#include "Person.h"
//包含.h文件并不能让编译器看见成员函数的实现
//第一种解决方式：直接包含源码（很少用）
//#include "Person.cpp"

//第二种解决方式：将.h.和.cpp写在一起，后缀名改为hpp
#include "Person.hpp"


int main()
{
	Person<string, int> p("Tom", 20);
	p.showPerson();
	return 0;
}