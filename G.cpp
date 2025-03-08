/// Print numbers to form a shape of triangle using
/// the specified  numbers as shown in the sample output.
/*
Case 1:(1, 4)
1
11
111
1111
Case 2:(3, 5)
3
33
333
3333
33333
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)// For the test cases
    {
        long long int x, n;
        cin>>x>>n;
        cout<<"Case "<<i<<": "<<"\n";
        for (int j=1; j<=n; j++)
        {
            for(int k=0; k<=n; k++)
            {
                if(k<j)// For The shape
                cout<<x;
            }
            cout<<"\n";
        }
    }
}

