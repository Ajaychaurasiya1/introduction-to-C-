#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
int real;
int imag;
public:
void input()
{
    cout<<"enter real and imaginary part respectively : ";
    cin>>real;
    cin>>imag;
}
Complex operator +(Complex obj)
{
    Complex temp;
    temp.real=real+obj.real;
    temp.imag=imag+obj.imag;
    return temp;
}
void output()
{
    cout<<"output is : "<<real<<"+"<<imag<<"i";
}

};

int main()
{
Complex c1,c2,res;
cout<<"enter the first complex number : ";
c1.input();
cout<<"enter the second complex number : ";
c2.input();
res=c1+c2;
res.output();


    return 0;
}