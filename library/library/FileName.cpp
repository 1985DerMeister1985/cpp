#include <iostream>
#include <string>
#include <vector>
using namespace std;


class library
{
public:
    class book
    {
    public:
        book()
        {
            book::set_info();
            cout << "����� �������! " << endl;
        }
        void set_info()
            {
                cout << "������� �������� �����: " << endl;
                cin >> name;
                cout << "������� ��� ������: " << endl;
                cin >> author;
                cout << "������� ��� �������: " << endl;
                cin >> year;
            }
        
        void get_info()
        {
            cout << "Name: " << name << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
        }
        ~book()
        {
            cout << "����� �������! " << endl;
        }
    private:
        string name;
        string author;
        int year;
    };
    book obj;
    void get_vec()
    {
        for (auto const& element : vecbooks)
        {
             obj.get_info();
        }
    }

    void add_vec()
    {
        vecbooks.push_back(obj);
    }
  
private:
    vector<book> vecbooks;
};


int main()
{
    setlocale(LC_ALL, "RU");
    cout << "����� ���������" << endl;
    library mylib;
    mylib.add_vec();
    mylib.add_vec();
    mylib.get_vec();
    cout << "����� ���������" << endl;

}