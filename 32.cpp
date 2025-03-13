#include<bits/stdc++.h>
using namespace std;

class increase
{
    private:
    int value;
    public:
    increase()
    {
        value=10;
    }
    void operator ++()
    {
        value=value+5;
    }
    void display()
    {
        cout<<"value is : "<<value<<endl;
    }
};

int main()
{
increase inc;
++inc;
inc.display();



    return 0;
}