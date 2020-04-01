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

//case:有5名选手ABCDE,10个评委分别对他们打分,去掉一个最高分和一个最低分,最后取平均分
//实现步骤:
//1.创建5名选手,存到vector中
//2.遍历vector容器,取出每个选手,分别进行打分,并把分数存到deque中
//3.使用sort算法对每位选手的分数进行排序,去掉最高分和最低分
//4.对剩下deque中的分数求和取平均分
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
		//10个评委给每个选手打分,并将分数存到deque容器中
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


		//排序
		sort(d.begin(),d.end());

		//去掉最高分和最低分
		d.pop_back();
		d.pop_front();

		//求剩下8个分数总和,然后去平均数
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); ++dit)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//把平均分给选手
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

	//随机数种子
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