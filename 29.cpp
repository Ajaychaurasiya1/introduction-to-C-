#include<bits/stdc++.h>
using namespace std;
class parent
{
    public:
    string name1="harley";

};
class child: public parent
{
public:
string name2="davidson";
};

int main()
{
child ch;
cout<<ch.name1+" "+ch.name2;

    return 0;
}