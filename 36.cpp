#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
vector<int>v;
for(int i=1;i<=10;i++)
{
    v.push_back(i);
}
cout<<"vector size is : "<<v.size()<<endl;
cout<<"capacity of vector is : "<<v.capacity()<<endl;
cout<<"the maximum size of vector is : "<<v.max_size()<<endl;
v.resize(5);
cout<<"after resize of vector is : "<<v.size()<<endl;
if(v.empty()==false)
{
    cout<<"vector is not empty";
}
else
{
    cout<<"vector is empty";
}

    return 0;
}