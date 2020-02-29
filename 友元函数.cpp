#include <iostream>
#include <string>
//友元函数
class Room
{
	//friend void brother1::visit1();
	friend class brother1;
	friend void brother(Room &r);
public:
	Room()
	{
		_Draw_room = "客厅";
		_Bedroom = "卧室";
	}
	
	std::string _Draw_room;
private:
	std::string _Bedroom;
};

//1.全局函数做友元
void brother(Room &r)
{
	std::cout << "好兄弟去了" << r._Draw_room << std::endl;
	//因为_Bedroom是私有属性,全局函数不可访问,因此将brother函数编程友元函数即可
	std::cout << "好兄弟去了" << r._Bedroom << std::endl; 
 }
//2.类做友元
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
	std::cout << "兄弟要去: " << room->_Draw_room << std::endl;
	//std::cout << "兄弟要去: " << room->_Bedroom<< std::endl;
}
brother1::brother1()
{
	room = new Room;
}
//3.成员函数做友元
void brother1::visit1()
{
	std::cout << "兄弟要去: " << room->_Bedroom << std::endl;
	
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