//#include "Person.h"
//����.h�ļ��������ñ�����������Ա������ʵ��
//��һ�ֽ����ʽ��ֱ�Ӱ���Դ�루�����ã�
//#include "Person.cpp"

//�ڶ��ֽ����ʽ����.h.��.cppд��һ�𣬺�׺����Ϊhpp
#include "Person.hpp"


int main()
{
	Person<string, int> p("Tom", 20);
	p.showPerson();
	return 0;
}