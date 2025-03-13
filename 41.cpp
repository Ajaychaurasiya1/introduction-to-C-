#include<iostream>
using namespace std;

enum captain{Avi,Sid,Rob,Sam,Jak};

int main()
{
captain cap=Avi;
if(cap==Avi)
{
    cout<<"our captain is Avi and it's value is : "<<Avi<<endl;
}
else
{
    cout<<"he is not our captain";
}

    return 0;
}