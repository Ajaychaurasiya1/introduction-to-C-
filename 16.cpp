#include<bits/stdc++.h>
using namespace std;
int fibo(int num)
{
    if(num<=1)
    {
        return num;
    }
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}

int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
 
    return 0;
}