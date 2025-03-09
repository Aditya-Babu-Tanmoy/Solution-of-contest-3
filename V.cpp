/// find the minimum number of moves you need to do in order to make a divisible by b.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a, b;
        cin>>a>>b;
        (a%b ==0) ? cout<<"0"<<"\n" : cout<<b-(a%b)<<"\n";
    }
}
