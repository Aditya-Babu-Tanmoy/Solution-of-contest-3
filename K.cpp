/// Given three numbers, find out if they form an arithmetic
/// progression, geometric progression, both, or none.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)// For the test cases
    {
        long long int x, y, z;
        bool a=false, b=false;// to check the arithmetic and geometric progression
        cin>>x>>y>>z;

        if((y-x)==(z-y))// Determine the arithmetic progression
            a=true;
        if((x!=0) && (y!=0) && (z!=0) && ((double)y/x)==((double)z/y))// Determine the geometric progression [Here use double type casting to determine the difference, and check the given value in not equal to 0]
            b=true;

        cout<<"Case "<<i<<": ";
        if(a && b)
            cout<<"Both"<<"\n";
        else if(a)
            cout<<"Arithmetic Progression"<<"\n";
        else if(b)
            cout<<"Geometric Progression"<<"\n";
        else
            cout<<"None"<<"\n";
    }
}

