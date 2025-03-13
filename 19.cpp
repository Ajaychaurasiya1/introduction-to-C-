#include<bits/stdc++.h>
using namespace std;

int main()
{
int n1,n2;
cin>>n1>>n2;
int a[n1][n2];
for(int i=0;i<n1;i++)
{
    for(int j=0;j<n2;j++)
    {
        cin>>a[i][j];
    }
}
// int a[3][3]={{5,4,3},{1,2,3},{6,7,8}};
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}