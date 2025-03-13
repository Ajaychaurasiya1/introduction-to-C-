#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
    string S;
    cin>>S;
    for(int i=0;i<S.size();i++)
    {
    if(S[i]=='c'||S[i]=='o'||S[i]=='d'||S[i]=='e'||S[i]='f'||S[i]=='r'||S[i]=='s')
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    }
    return 0;
}