#include<bits/stdc++.h>
using namespace std;

int main()
{
string S;
cout<<"enter the string : ";
getline(cin,S);
cout<<"you have entered : ";
cout<<S<<endl;
S.push_back('A');
cout<<"after using pushback function : "<<S<<endl;
S.pop_back();
cout<<"after using popbCK FUNCTION : "<<S<<endl;


    return 0;
}