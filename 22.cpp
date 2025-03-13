#include<bits/stdc++.h>
using namespace std;

int main()
{
int *ptr;
int array[]={5,6,7,8,9,1,2};
ptr=array;
for(int i=0;i<7;i++)
{
cout<<*ptr<<endl;
ptr++;
}


    return 0;
}