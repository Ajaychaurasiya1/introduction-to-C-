#include<bits/stdc++.h>
using namespace std;
class billboard
{
    private:
    string title;
    public:
    billboard(string b)
    {
        settitle(b);
    }
    void settitle(string a)
    {
        title=a;
    }
    string gettitle()
    {
        return title;
    }
};

int main()
{
billboard bill("top 3 song of 2022");
cout<<bill.gettitle();



    return 0;
}