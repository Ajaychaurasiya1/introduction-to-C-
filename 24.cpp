#include<bits/stdc++.h>
using namespace std;

int main()
{
int size;
cout<<"enter the size : ";
cin>>size;
int *ptr;
ptr=new int[size];
cout<<"enter the element :";
for(int i=0;i<size;i++)
{
    cout<<"element : ";
    cin>>ptr[i];
}
cout<<"element that you have entered : ";
for(int i=0;i<size;i++)
{
    cout<<"element : "<<ptr[i]<<endl;
}
delete[] ptr;
    return 0;
}