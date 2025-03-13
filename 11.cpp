#include<bits/stdc++.h>.h>
using namespace std;
void increment(int &S)
{
    S=S+3000;
    cout<<"salary inside function : "<<S<<endl;
}
int main()
{
    int salary=27000;
    increment(salary);
    cout<<"salary inside main : "<<salary<<endl;

    return 0;
}