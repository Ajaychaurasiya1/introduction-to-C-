#include<iostream>
using namespace std;

enum supercar{venom=301,veryon=268,valkyrie=240,roadster=25};

int main()
{
supercar speed1;
supercar speed2;
speed1=valkyrie;
speed2=roadster;
if(speed1<speed2)
{
    cout<<"it is a win for roadster with the spped of "<<speed2;
}
else
{
    cout<<"its a win for valkyrie with speed of "<<speed1;
}
    return 0;
}