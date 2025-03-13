#include<bits/stdc++.h>
using namespace std;
class billboard
{
private:
string title;
public:
void settitle(string X)
{
    title=X;
}
string gettitle()
{
    return title;
}
};

int main()
{
billboard bill;
bill.settitle("top 5 songs og 2022");
cout<<bill.gettitle();

    return 0;
}