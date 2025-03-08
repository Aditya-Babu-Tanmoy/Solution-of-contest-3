///My favorite
/*In this problem, you will be given an integer N.
You need to write all the binary numbers of length N.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int l=(1<<n), i; // l is the binary length of n
        if(n==1) // Corner case
        {
            cout<<"0"<<"\n"<<"1"<<"\n";
            continue;
        }
        for(i=pow(2,n-1); i<l; i++) // i is starting point of checking
            cout<<bitset<10>(i).to_string().substr(10-n)<<"\n"; // use bitset(max 10) to count bit-bit then convert it to string

    }
    return 0;
}


