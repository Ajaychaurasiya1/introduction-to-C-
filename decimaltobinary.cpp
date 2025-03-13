#include<bits/stdc++.h>
using namespace std;

int main()
{
int N;
int binary=0;
int rem=1;
int prod=1;
cin>>N;
while(N!=0)
{
rem=N%2;
binary=binary+(rem*prod);
N=N/2;
prod=prod*10;
}
cout<<binary;

    return 0;
}