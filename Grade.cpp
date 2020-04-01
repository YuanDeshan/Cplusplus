#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::deque;

//case:��5��ѡ��ABCDE,10����ί�ֱ�����Ǵ��,ȥ��һ����߷ֺ�һ����ͷ�,���ȡƽ����
//ʵ�ֲ���:
//1.����5��ѡ��,�浽vector��
//2.����vector����,ȡ��ÿ��ѡ��,�ֱ���д��,���ѷ����浽deque��
//3.ʹ��sort�㷨��ÿλѡ�ֵķ�����������,ȥ����߷ֺ���ͷ�
//4.��ʣ��deque�еķ������ȡƽ����
class Player
{
public:
	Player(string name, int score)
	{
		this->_name = name;
		this->_score = score;
	}

public:
	string _name;
	int _score;
};

void CreatePlayer(vector<Player>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; ++i)
	{
		string name = "Player_";
		name += nameseed[i];

		int score = 0;
		Player p(name, score);
		v.push_back(p);
	}
}

void Grade(vector<Player>& v)
{
	for (vector<Player>::iterator vit = v.begin(); vit != v.end(); ++vit)
	{
		//10����ί��ÿ��ѡ�ִ��,���������浽deque������
		deque<int> d;
		for (int i = 0; i < 10; ++i)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//test
		/*cout << "Player_" << vit->_name << "  " << "score: ";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
		{
			cout << *dit<<" ";
		}
		cout << endl;*/


		//����
		sort(d.begin(),d.end());

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//��ʣ��8�������ܺ�,Ȼ��ȥƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//��ƽ���ָ�ѡ��
		vit->_score = avg;
	}
}

void PrintPlayer(vector<Player>& v)
{
	for (vector<Player>::iterator vit = v.begin(); vit != v.end(); ++vit)
	{
		cout << vit->_name << "  " <<"score: "<< vit->_score << endl;
	}

}

int main()
{

	//���������
	srand((unsigned int)time(NULL));

	vector<Player> v;
	CreatePlayer(v);
	//test
	//for (vector<Player>::iterator vit = v.begin(); vit != v.end(); ++vit)
	//{
	//	cout << vit->_name << "  " <<"score: "<< vit->_score << endl;
	//}

	Grade(v);
	PrintPlayer(v);

	return 0;
}