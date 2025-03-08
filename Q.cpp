/// Count a word from a string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)// For the test cases
    {
        string st, fin;
        int co=0;

        cin>>st;
        cin>>fin;

        cout<<"Case "<<i<<": ";
        for(int j=0; j<=st.length()-fin.length(); j++)
            if(st.substr(j, fin.length())== fin )
                co++;
        cout<<co<<"\n";
    }
    return 0;
}

