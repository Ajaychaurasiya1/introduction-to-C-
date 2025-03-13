#include<bits/stdc++.h>
using namespace std;

class tradefair
{
private:
int coupon;
public:
void setcoupon(int c)
{
    coupon=c;
}
int getcoupon()
{
    return coupon;
}
};

int main()
{
tradefair t;
t.setcoupon(50);
cout<<"coupon : "<<t.getcoupon();

    return 0;
}