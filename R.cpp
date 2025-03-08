/// Find Vowel form the given range of a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)// For the test cases
    {
        string st;
        int n, m, co=0;

        cin>>st;
        cin>>n>>m;

        cout<<"Case "<<i<<": ";
        for(int j=n-1; j<m; j++)
            if(st[j]=='a' || st[j]=='e' || st[j]=='i' || st[j]=='o' || st[j]=='u' || st[j]=='A' || st[j]=='E' || st[j]=='I' || st[j]=='O' || st[j]=='U')
                co++;
        cout<<co<<"\n";
    }
    return 0;
}
