#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <map>
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::multimap;
using std::make_pair;

#define CEHUA 0
#define HOUQIN 1
#define MUSIC 2

class Worker
{
public:
	string _name;
	int _salary;
};

void CreateWorker(vector<Worker>& vw)
{
	string Nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; ++i)
	{
		Worker w;
		w._name = "Worker_";
		w._name += Nameseed[i];

		w._salary = rand() % 5000 + 5000;//5000-9999
		vw.push_back(w);
	}
}

void PrintWorker(const vector<Worker>& vw)
{
	for (vector<Worker>::const_iterator it = vw.begin(); it != vw.end(); ++it)
	{
		cout << it->_name << "  " << it->_salary << endl;
	}
}

void SetGroup(vector<Worker>& vw,multimap<int,Worker>& mw)
{
	for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); ++it)
	{
		//���ű��
		int depid = rand() % 3;// 0 1 2
		//*it Ϊworker
		mw.insert(make_pair(depid, *it));
	}
	
}

void ShowWorkerByGroup(multimap<int,Worker>& mw)
{
	cout << "�߻�����: " << endl;
	multimap<int, Worker>::iterator pos = mw.find(CEHUA);
	int index = 0;
	int num = mw.count(CEHUA);
	for (; pos != mw.end() && index < num; ++pos, ++index)
	{
		cout << "Ա��: " << pos->second._name << "  " << "н��: " << pos->second._salary << endl;
	}

	cout << "=================================" << endl;
	cout << "���ڲ���: " << endl;
	pos = mw.find(HOUQIN);
	index = 0;
	num = mw.count(HOUQIN);
	for (; pos != mw.end() && index < num; ++pos, ++index)
	{
		cout << "Ա��: " << pos->second._name << "  " << "н��: " << pos->second._salary << endl;
	}
	
	cout << "=================================" << endl;
	cout << "���ֲ���: " << endl;
	pos = mw.find(MUSIC);
	index = 0;
	num = mw.count(MUSIC);
	for (; pos != mw.end() && index < num; ++pos, ++index)
	{
		cout << "Ա��: " << pos->second._name << "  " << "н��: " << pos->second._salary << endl;
	}
}

void test01()
{
	//1.����Ա��
	vector<Worker> vw;
	CreateWorker(vw);
	//Ա������
	//PrintWorker(vw);

	//2.���䲿��
	multimap<int, Worker> mw;
	SetGroup(vw,mw);

	//3.��������ʾԱ��
	ShowWorkerByGroup(mw);
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
	return 0;
}
