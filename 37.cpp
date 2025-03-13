#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>v;
for(int i=1;i<=10;i++)
{
    v.push_back(i);
}
cout<<"size is : "<<v.size();
v.resize(7);
cout<<"ater resizing it becomes : "<<v.size()<<endl;;
if(v.empty()==false)
{
    cout<<"it is not empty "<<endl;
}
else{
    cout<<"it is empty "<<endl;
}
cout<<"elements of vector ";
for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*it<<" ";
}

    return 0;
}