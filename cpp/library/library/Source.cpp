/*
������� 4:
�������� ��������� ��� ����� ������������ ����. ���������� ������ Book � Library.
����� Book ������ ��������� ���������� � ��������, ������ � ���� ������� �����.
����� Library ������ ��������� ������ ���� � ������ ��� ����������, �������� � ������ ���� � ����������.
*/
#include <iostream>
using namespace std;
class library
{
public:
	
private:

};

class book
{
	friend class library;
public:
	book()
	{
		cout << "������� �������� �����: " << endl;
		cin >> name;
		cout << "������� ������ �����: " << endl;
		cin >> autor;
		cout << "������� ��� ������� �����: " << endl;
		cin >> year;
	}
	void del_book()
	{
		
		
	}

private:
	string name;
	string autor;
	short int year;
};
int main()
{
	setlocale(LC_ALL, "RU");




	return 0;
}