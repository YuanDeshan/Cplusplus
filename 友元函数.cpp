#include <iostream>
#include <string>
//��Ԫ����
class Room
{
	//friend void brother1::visit1();
	friend class brother1;
	friend void brother(Room &r);
public:
	Room()
	{
		_Draw_room = "����";
		_Bedroom = "����";
	}
	
	std::string _Draw_room;
private:
	std::string _Bedroom;
};

//1.ȫ�ֺ�������Ԫ
void brother(Room &r)
{
	std::cout << "���ֵ�ȥ��" << r._Draw_room << std::endl;
	//��Ϊ_Bedroom��˽������,ȫ�ֺ������ɷ���,��˽�brother���������Ԫ��������
	std::cout << "���ֵ�ȥ��" << r._Bedroom << std::endl; 
 }
//2.������Ԫ
class brother1
{
public:
	brother1();
	void visit();
	void visit1();
private:
	Room* room;
};

void brother1::visit()
{
	std::cout << "�ֵ�Ҫȥ: " << room->_Draw_room << std::endl;
	//std::cout << "�ֵ�Ҫȥ: " << room->_Bedroom<< std::endl;
}
brother1::brother1()
{
	room = new Room;
}
//3.��Ա��������Ԫ
void brother1::visit1()
{
	std::cout << "�ֵ�Ҫȥ: " << room->_Bedroom << std::endl;
	
}

int main()
{
	/*Room r;*/
	//brother(r);
	/*brother1 b;
	b.visit();*/
	brother1 b;
	b.visit1();
	return 0;
}