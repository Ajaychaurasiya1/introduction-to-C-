#include<bits/stdc++.h>
using namespace std;
int fact(int number)
{
    if(number<1)
    {
        return 1;
    }
    else
    {
        return number*fact(number-1);
    }
    
}

int main()
{ 
int number;
cout<<"enter the number : ";
cin>>number;
cout<<"the factorial of the number you have entered : "<<fact(number);

    return 0;
}