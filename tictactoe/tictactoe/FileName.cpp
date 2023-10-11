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
    bool win()//������� ����� chatGPT ������ ���� ���������
    {
        // �������� �������������� �����
        for (int i = 0; i < 3; i++)
        {
            if ((fld[i][0] == 'x' or fld[i][0] == 'o') &&
                (fld[i][1] == 'x' or fld[i][1] == 'o') &&
                (fld[i][2] == 'x' or fld[i][2] == 'o'))
            {
                return true;
            }
        }

        // �������� ������������ ��������
        for (int j = 0; j < 3; j++)
        {
            if ((fld[0][j] == 'x' or fld[0][j] == 'o') &&
                (fld[1][j] == 'x' or fld[1][j] == 'o') &&
                (fld[2][j] == 'x' or fld[2][j] == 'o'))
            {
                return true;
            }
        }

        // �������� ����������
        if ((fld[0][0] == 'x' or fld[0][0] == 'o') &&
            (fld[1][1] == 'x' or fld[1][1] == 'o') &&
            (fld[2][2] == 'x' or fld[2][2] == 'o'))
        {
            return true;
        }
        if ((fld[0][2] == 'x' or fld[0][2] == 'o') &&
            (fld[1][1] == 'x' or fld[1][1] == 'o') &&
            (fld[2][0] == 'x' or fld[2][0] == 'o'))
        {
            return true;
        }

        // ���� �� ������� �� ����� ���������� ����������, ���������� false
        return false;
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
    bool win = A.win();
    
};
int main()
{
    setlocale(LC_ALL, "RU");

    hello();
    player A;
   
    do
    {
        A.set_step();
        A.get_field();
    } while (A.win);
   
    

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