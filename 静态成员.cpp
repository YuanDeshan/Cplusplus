#include <iostream>
#include <string>

class Person
{
public:

	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func()
	{
		//��̬��Ա�������Է��ʾ�̬��Ա����
		country= "japan";
		//���ܷ��ʷǾ�̬��Ա����,��Ϊ�ú�������
		//ʶ��Ǿ�̬��Ա������������һ�����������
		//name = "����";
	}
	//��̬��Ա������������,�����ʼ��
	static std::string country;
	std::string name;
	//��̬��Ա����Ҳ���з���Ȩ�޵�,��Ȩ��Ϊprivateʱ,�����ǲ��ɷ��ʵ�
//private:
//	static std::string country;

};
//�����ʼ��
std::string Person::country = "china";


//���ʷ�ʽ
void test()
{
	//��̬��Ա����������ĳ������,���ж��󶼹���ͬһ������
	//��˾�̬��Ա�����ķ��ʷ�ʽ��2��:
	//1.ͨ�������������

	//2.ͬ����������
	std::cout << Person::country << std::endl;
}
int main()
{

	Person p;
	std::cout << p.country << std::endl;

	Person p1;
	p1.country = "japan";
	std::cout << p.country << std::endl;

	return 0;
}