/*A sequence is an arithmetic sequence if every two successive
numbers have the same difference. Suppose this is a sequence of numbers:
 a1, a2, a3, ... an
This is an arithmetic sequence if ai - ai+1 is the same for each i from 1 to n-1.
You are given first 3 terms of a sequence and the value of n. If it is an
arithmetic sequence you must print the nth term. Otherwise you must print “Error”.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)// For the test cases
    {
        long long int x, y, z, n;
        cin>>x>>y>>z>>n;
        cout<<"Case "<<i<<": ";
        if((y-x)==(z-y)) // To check the arithmetic sequence
        {
            long long int d=y-x; // Determine the difference
            long long int a=x+(n-1)*d; // Find the Nth term
            cout<<a<<"\n";
        }
        else
            cout<<"Error"<<"\n";
    }
}

