#include<bits/stdc++.h>
using namespace std;
void maxx(int n1,int n2)
{
    if(n1>n2)
    {
        cout<<"larger number : "<<n1<<endl;
    }
    else
    {
        cout<<"larger number :"<<n2<<endl;
    }
}

int main()
{
int n1;
int n2;
cout<<"enter the first number : ";
cin>>n1;
cout<<"enter the second number : ";
cin>>n2;
maxx(n1,n2);


    return 0;
}