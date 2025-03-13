#include<bits/stdc++.h>
using namespace std;

int main()
{
int num,rem,i=0,des=0;
cout<<"enter the binary number";
cin>>num;
// temp=num;
while(num>0)
{
    rem=num%10;
    des=des+rem*pow(2,i);
    i++;
    num=num/10;
}
cout<<des;
    return 0;
}