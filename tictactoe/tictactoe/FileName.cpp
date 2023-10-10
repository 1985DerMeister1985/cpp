/*
������: �������� ���� "��������-������"

���������� ������� ������� ��������� ������ ���� "��������-������" ��� ���� �������.
��� ����� ������� �����, �������������� ������� ����, � ������ ��� ���������� ��.
������ ����� ������ ����������, � �� ������ ���������, ������� �� ���-�� ����� ������� ����.

�������������� �������:

����������, ��� �� ������� �������, ��� �������� �����.
���������, �������� �� ��� ������ ���������� (�� ������� �����).
����� ��������� ���� ���������� ������� ������� ��� ���.
��� ������ �������� ��� ���������������� � ������������� �������,
�������, ������� � ������, � ����� � ��������� ����������������� �����.

����� � �������� ����!
*/

#include <iostream>
using namespace std;
void hello();
class player;
class field
{
public:
    
    void set_step(int a, char b)
    {
        
        try {
            switch (a)
            {
            case 1:
                fld[0][0] = b;
                break;
            case 2:
                fld[0][1] = b;
                break;
            case 3:
                fld[0][2] = b;
                break;
            case 4:
                fld[1][0] = b;
                break;
            case 5:
                fld[1][1] = b;
                break;
            case 6:
                fld[1][2] = b;
                break;
            case 7:
                fld[2][0] = b;
                break;
            case 8:
                fld[2][1] = b;
                break;
            case 9:
                fld[2][2] = b;
                break;
            default:
                cout << "�� ������ ����!" << endl;
                throw(a);
            }
        }
        catch (int)
        {
            cout << "�� ����� " << a << "!" << endl;
        }
    }
    void get_field()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << fld[i][j] << " ";
            }
        }
        cout << endl;
    }
   
private:
    
    char fld[3][3] = { '#','#','#','#','#','#','#','#','#' };
};


class player
{
public:
    field A;
    void set_step()
    {
        int a;
        char b;
        cout << "������� ����� ������ � ������" << endl;
        cin >> a;
        cin >> b;
        A.set_step(a,b);
    }
    void get_field()
    {
        A.get_field();
    }
};
int main()
{
    setlocale(LC_ALL, "RU");

    hello();
    player A;
   
    
    A.set_step();
    A.get_field();
    A.set_step();
    A.get_field();
    A.set_step();
    A.get_field();
    A.set_step();
    A.get_field();

    return 0;
}

void hello()
{
    cout << "\t\t���� ��������-������ " << endl;
    cout << "������� ����:" << endl;
    cout << "����� � ������ �������� �" << endl;
    cout << "����� B ������ �������� X" << endl;
    cout << "��� ���� ����� ������ ������ � ��� � " << endl;
    cout << "� ������ ����� ������ ���� ������ ��������� ������ �� 1 �� 9" << endl;
}