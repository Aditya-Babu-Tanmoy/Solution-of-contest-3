/// Determine whether the given number is a multiple of 3 or not.
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        (m%3 == 0) ? cout<<m<<" is a multiple of 3"<<"\n" : cout<<m<<" is not a multiple of 3"<<"\n"; // Check Multiplier
    }
}

