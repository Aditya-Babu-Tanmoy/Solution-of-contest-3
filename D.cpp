/// Given 3 distinct numbers, print them in ascending order.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)// for test cases
    {

        vector<int>a(3);
        for(int i=0; i<3; i++)
            cin>>a[i];

        sort(a.begin(),a.end());
        cout << "Case "<<i<<": ";
        for(auto b: a)
            cout<<b<<" ";

        cout<<"\n";
    }
}

