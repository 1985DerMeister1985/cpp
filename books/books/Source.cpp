#include <iostream>
#include <list>
#include <string>
#include <fstream>


using namespace std;

class book
{
public:
	book()
	{

	}
	book()
	{
		cout << "������� �������� �����: ";
		cin >> name;
		cout << "������� ��� ������: ";
		cin >> author;
		cout << "������� ��� �������:";
		cin >> year;
	}
	~book()
	{
		cout << "����� �������!" << endl;
	}
private:
	string name;
	string author;
	unsigned int year;
};

class library
{
public:
	void add_book(book)
	{

	}
	void remove_book(book)
	{

	}
	//void find_book(author)
	
	//void find_book(year)

	void list_book()
	{

	}
private:

	list<string> books;

};

int main()
{
	setlocale(LC_ALL, "RU");
	ofstream out;
	book first;
	out.open("Library.txt");
	if (!out.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		out.write((char*)&first,sizeof(book));
		cout << "������ � ���� �������. " << endl;
	}

	out.close();
	





}