#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,c,m;
cin>>n>>c>>m;
int X=n/c;
if(X%m==0)
{
    cout<<X+(X/m);
}
else
{
cout<<X+((X/m)+1)+1;
}

    return 0;
}