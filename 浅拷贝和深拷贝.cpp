#include <iostream>

class Person
{
public:
	Person()
	{
		std::cout << "Ĭ�Ϲ��캯��" << std::endl;
	}
	Person(int age, int ID)
	{
		std::cout << "�вι��캯��" << std::endl;
		_age = age;
		_ID = new int(ID);
	}
	Person(const Person &p)
	{
		//��������Ĭ�Ͽ������캯��������:
		_age = p._age;
		//_ID = p._ID;//����ID��ָ��,��ռ��ڶ���
		//�޸ĺ�
		//���¿���һ�οռ������洢����������ֵ
		//����p2��p1�Ͳ����ͷ���ͬ�Ŀռ�
		_ID = new int(*p._ID);
	}
	~Person()
	{
		if (_ID != NULL)
		{
			delete _ID;
			_ID = NULL;
		}
		std::cout << "��������" << std::endl;
	}
	int _age;
	int* _ID;
};

//��������Ϊǳ����,���ʹ�ñ�����Ĭ�ϵĿ������캯��,p2��p1����֮��,
//����ID�ĵ�ַ����ͬ�ĵ�p2�������������ͷſռ��,p1�ٴν����ͷŸÿռ�ͻ����
//���ǳ���������������ظ��ͷŶѿռ�����
//�������:�Լ����¹����������캯��
void test1()
{
	Person p1(18,9999);
	std::cout << "����Ϊ: " << p1._age << " IDΪ: " << *p1._ID << std::endl;

	Person p2(p1);
	std::cout << "����Ϊ: " << p2._age << " IDΪ: " << *p2._ID << std::endl;

}
int main()
{
	test1();
	return 0;
}