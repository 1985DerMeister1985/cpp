/*
������� 4:
�������� ����� BankAccount (���������� ����) � ���������� ������ ��� ����� ���������, 
������ ����� � �������. 
���������� ������ ��� ���������� � ������ ����� �� �����,
� ����� ����� ��� ������ ���������� � �����.
*/
#include <iostream>
typedef unsigned int ui;
using namespace std;
class banacc
{
	banacc()
	{
		money = 0;
	}
public:
	void show()
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "---" << "Name: " << name << endl;
		cout << "---" << "ID account: " << id_acc << endl;
		cout << "---" << "Amount money: " << money;
		cout << "------------------------------------------------------------------" << endl;
	}
	void add()
	{
		ui add=0;
		cout << "Enter amount: " << endl;
		cin >> add;
		money += add;
	}


private:
	string name;
	ui id_acc;
	ui money;
};


int main()
{




	return 0;
}