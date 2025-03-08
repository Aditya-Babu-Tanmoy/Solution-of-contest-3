/// Print all multiples of x between 1 to N.
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)// for test cases
    {
        long long int x, n;
        cin>>x>>n;
        cout<<"Case "<<i<<": ";
        for (int j = x; j<=n; j+=x) // x is lowest number and n is larger number. j+=x ==> 4, 8, 12, .....
            cout<<j<<" ";

        cout<<"\n";
    }
}

