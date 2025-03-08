/// Count a random letter from a sting
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)// For the test cases
    {
        string st;
        int co=0;
        char n;
        cin>>st;
        cin>>n;

        cout<<"Case "<<i<<": ";
        for(int i=0; i<st.length(); i++)
            if(st[i]==n)
                co++;
        cout<<co<<"\n";
    }
    return 0;
}

