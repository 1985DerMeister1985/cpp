#include <iostream>
 using std::cout;
 using std::endl;

int main()
{
int arr[5][5];

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        arr[i][j] = j+1;
    }
}

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
      cout <<  arr[i][j]; 
    }
    cout << endl;
}


    return 0;
}