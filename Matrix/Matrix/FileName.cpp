#include <iostream>
#include <vector>
using namespace std;
int code();
class Matrix
{
	
public:
	friend int code();
	void addition()
	{
		cout << "��������� �������� :" << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cout << matrix_a[i][j] + matrix_b[i][j] << " ";
			}
			cout << endl;
		}
	}
	void subtraction()
	{
		cout << "��������� ��������� : " << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cout << matrix_a[i][j] - matrix_b[i][j] << " ";
			}
			cout << endl;
		}
	}
	void multiplication()
	{ 
		cout << "��������� ���������: " << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cout << matrix_a[i][j] * matrix_b[i][j] << " ";
			}
		cout << endl;
		}
	}
	void transposition()
	{
		cout << "���������������� ������� �: " << endl;
		for (int i = 0; i < row_a; i++)
		{
			for (int j = 0; j < col_a; j++)
			{
				cout << matrix_a[j][i];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;

		cout << "���������������� ������� B: " << endl;
		for (int i = 0; i < row_b; i++)
		{
			for (int j = 0; j < col_b; j++)
			{
				cout << matrix_b[j][i];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;

	}

	void set_size_ma()
	{
		cout << "������� ������� ������� A (������� � ������): " << endl;
		cin >> col_a;
		cin >> row_a;
		matrix_a.resize(col_a, vector<int>(row_a));
	
		cout << "������� �������� ������� A: " << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cin >> matrix_a[i][j];
			}
		}
	}
	void set_size_mb()
	{
		cout << "������� ������� ������� B (������� � ������): " << endl;
		cin >> row_b;
		cin >> col_b;
		matrix_b.resize(col_b, vector<int>(row_b));
			cout << "������� �������� ������� B: " << endl;
		for (int i = 0; i < col_b; i++)
		{
			for (int j = 0; j < row_b; j++)
			{
				cin >> matrix_b[i][j];
			}
		}
	}
	void get_ma()
	{
		cout << "������� �: " << endl;
		for (int i = 0; i < col_a; i++)
		{
			for (int j = 0; j < row_a; j++)
			{
				cout << matrix_a[i][j];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	void get_mb()
	{
		cout << "������� B: " << endl;
		for (int i = 0; i < col_b; i++)
		{
			for (int j = 0; j < row_b; j++)
			{
				cout << matrix_b[i][j];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
private:
	int row_a=0;
	int col_a=0;
	vector<vector<int>> matrix_a;

	int row_b=0;
	int col_b=0;
	vector<vector<int>> matrix_b;

};

int main()
{
	setlocale(LC_ALL, "RU");

	Matrix M;
	M.set_size_ma();
	M.set_size_mb();

	M.get_ma();
	M.get_mb();
	
	if (code() == 1) { M.addition();}
	if (code() == 2) {M.subtraction();}
	if (code() == 3) { M.multiplication(); }
	if (code() == 4) { M.transposition(); }
	return 0;
}
int code()
{
	try
	{
		cout << "�������� �������� :" << endl;
		cout << "1. �������� " << endl;
		cout << "2. ��������� " << endl;
		cout << "3. ��������� " << endl;
		cout << "4. ���������������� " << endl;
		int code;
		cin >> code;
		switch (code)
		{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		default:
			throw(code);
			break;
		}
	}
	catch (int code)
	{
		cout << "�� ������ ���� ����! " << endl;
		return 0;
	}
}