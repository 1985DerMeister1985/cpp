/*
#include <iostream>
using namespace std;
struct newstrct
{
char tst = 'b';
int t = 15;
void test()
{
    cout << "Test complete" << endl;
}

};
struct mystr
{
double b = 2.5;
int a =5;
char c = 'a';
bool d = true;
void szof()
{
cout << "Char c: " << sizeof(c) << endl;
cout << "Bool d: " << sizeof(d) << endl;
cout << "Int a: " << sizeof(a) << endl;
cout << "Double b: " << sizeof(b) << endl;
}
};
int main()
{
mystr mystruct;
mystruct.szof();
cout << "szof: " << sizeof(mystruct.szof()) << endl;
cout << "My struct: " << sizeof(mystruct) << endl;
mystruct.a.t = 12;


return 0;
}
*/



#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
struct Distance // ????? ? ?????????? ???????
{
int feet; // ????
float inches; // ?????
};
//////////////////////////////////////////////////////////
struct Room // ??????? ????????????? ???????
{
Distance length; // ?????
Distance width; // ??????
};
//////////////////////////////////////////////////////////
int main()
{
Room dining; // ?????????? dining ???? Room
dining.length.feet = 13; // ??????? ?????????? ???????
dining.length.inches = 6.5;
dining.width.feet = 10;
dining.width.inches = 0.0;
// ?????????????? ????? ? ?????? ? ???????????? ??????
float l = dining.length.feet + dining.length.inches / 12;
float w = dining.width.feet + dining.width.inches / 12;
// ?????????? ??????? ??????? ? ????? ?? ?????
cout << "??????? ??????? ????? " << l * w
<< " ?????????? ?????\n";
return 0;
}