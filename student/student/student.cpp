/*
������� 3:
���������� ����� Student, �������������� ��������.
����� ������ ����� ��������� ���� ��� �����, �������, �������� � ������� ������ ��������.
�������� ������ ��� ��������� � ��������� �������� �����,
� ����� ����� ��� ������ ���������� � �������� �� �����.
*/
#include <iostream>
using namespace std;
class students
{
public:
	void add_stdnt()
	{
		cout << "������� ��� �������� :" << endl;
		cin >> name;
		cout << "������� ������� �������� :" << endl;
		cin >> surname;
		cout << "������� ������� �������� :" << endl;
		cin >> age;
		cout << "������� ������� ���� �������� :" << endl;
		cin >> rate;
	}
	void show_info()
	{
		cout << "��� :" << name << endl;
		cout << "������� :" << surname << endl;
		cout << "������� :" << age << endl;
		cout << "������� ���� :" << rate << endl;
	}
private:
	string name;
	string surname;
	short int age;
	short int rate;
};

int main()
{
	setlocale(LC_ALL, "RU");
	students ivan;
	ivan.add_stdnt();
	ivan.show_info();

	students maria;
	maria.add_stdnt();
	maria.show_info();



	return 0;

}