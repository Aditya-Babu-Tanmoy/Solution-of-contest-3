/// Separate the vowels and consonant from a sentence
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore(); // To ignore garbage value of t
    for(int i=1; i<=t; i++)// For the test cases
    {
        string st, cons="", vowel="";
        int k=0, l=0;

        getline(cin,st); // To input with space



        for(int j=0; j<st.length(); j++)
            if(st[j]=='a' || st[j]=='e' || st[j]=='i' || st[j]=='o' || st[j]=='u' || st[j]=='A' || st[j]=='E' || st[j]=='I' || st[j]=='O' || st[j]=='U')
                vowel.push_back(st[j]);
            else if(st[j]==' ')
                continue;
            else
                cons.push_back(st[j]);
        cout<<"Case "<<i<<": "<<"\n";
        for(auto p: vowel)
            cout<<p;
        cout<<"\n";
        for(auto q: cons)
            cout<<q;
        cout<<"\n\n";
    }
    return 0;
}
