#include<iostream>
using namespace std;



int main()
{
enum color{red,blue,green,yellow};
color select=yellow;
switch(select)
{
    case red:
    cout<<"it is red";
    break;
    case blue:
    cout<<"it is blue";
    break;
    case green:
    cout<<"it is green";
    break;
    case yellow:
    cout<<"it is yellow";
    break;
}

    return 0;
}