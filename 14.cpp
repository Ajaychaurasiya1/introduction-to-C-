#include<bits/stdc++.h>
using namespace std;
int sum(int num)
{
    if(num!=0)
    {
        return num+sum(num-1);
    }
}

int main()
{
    int num;
    cout<<"enter the number : ";
    cin>>num;
    cout<<"sum : "<<sum(num);
    
    return 0;
}