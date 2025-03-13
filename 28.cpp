#include<bits/stdc++.h>
using namespace std;
class gambit
{
public:
gambit()
{
    cout<<"hello there i am a constructer"<<endl;
}
~gambit()
{
    cout<<"hello there I am destructer"<<endl;
}
void display()
{
    cout<<"hello !"<<endl;
}
};

int main()
{
gambit gam;
gam.display();

    return 0;
}