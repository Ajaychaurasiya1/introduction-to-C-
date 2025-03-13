#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    cin>>N;
    long long count=0;
    for(int i=1;i<=N;i++)
    {
        string S;
        cin>>S;
        string T="314159265358979323846264338327";
        for(long long i=0;i<S.size();i++)
        {
            if(T[i]==S[i])
            {
            count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }
    // cout<<count<<endl;
    
    return 0;
}