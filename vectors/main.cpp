#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
class Coordinates
{
public:
    Coordinates()
    {
        cout << "Задайте координаты x: ";
        cin >> x;
        cout << "Задайте координаты y: ";
        cin >> y;
    }
    Coordinates(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    ~Coordinates()
    {

    }
    void get_coor()
    {
        cout << "_________________________" << endl;
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
        cout << "_________________________" << endl;
    }
private:
    int x;
    int y;
};

int main()
{
   Coordinates obj1(3,6);
   Coordinates obj2;
   Coordinates obj3;
   Coordinates obj4(8,3);
   Coordinates obj5(1,7);
   Coordinates obj6;
    vector<Coordinates> MyVec;
    MyVec.push_back(obj1);
    MyVec.push_back(obj2);
    MyVec.push_back(obj3);
    MyVec.push_back(obj4);
    MyVec.push_back(obj5);
    MyVec.push_back(obj6);


    for(vector<Coordinates>::iterator it = MyVec.begin(); it != MyVec.end(); it++)
    {
         it->get_coor() ;
    }
 return 0;
}
