#include<bits/stdc++.h>
using namespace std;

int main()
{
int num1,num2;
int sum=0;
int sub=0;
int *ptr1;
int *ptr2;
cout<<"enter two number";
cin>>num1;
cin>>num2;
ptr1=&num1;
ptr2=&num2;
(*ptr1)++;
(*ptr2)++;
cout<<"after increment"<<endl;
cout<<*ptr1<<endl;
cout<<*ptr2<<endl;
sum=*ptr1+*ptr2;
cout<<"addition : "<<sum<<endl;
(*ptr1)--;
(*ptr2)--;
cout<<"after decrement : ";
cout<<*ptr1<<endl;
cout<<*ptr2<<endl;
sub=*ptr1-*ptr2;
cout<<"subtraction : "<<sub<<endl;

    return 0;
}