#include<bits/stdc++.h>
using namespace std;
class animal
{
public:
void speed()
{
    cout<<"who is more faster ? "<<endl;
}
};
class dolphin:public animal
{
public:
void speed()
{
    cout<<"I'm faster in water "<<endl;
}
};
class cheetah:public animal
{
public:
void speed()
{
    cout<<"I'm faster on the ground "<<endl;
}
};

int main()
{
animal a;
cheetah c;
dolphin d;
a.speed();
c.speed();
d.speed();


    return 0;
}