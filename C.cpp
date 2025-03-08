/// Determine grade of a given mark.
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)// for test cases
    {
        int m;
        cin>>m;

        switch(m) // Use switch case to determine the interval
        {
            case 80 ... 100: // Use " ... " for the range
                cout<<"Case "<<i<<": A+"<<"\n";
                break;
            case 75 ... 79:
                cout<<"Case "<<i<<": A" <<"\n";
                break;
            case 70 ... 74:
                cout<<"Case "<<i<<": A-" <<"\n";
                break;
            case 65 ... 69:
                cout<<"Case "<<i<<": B+" <<"\n";
                break;
            case 60 ... 64:
                cout<<"Case "<<i<<": B" <<"\n";
                break;
            case 55 ... 59:
                cout<<"Case "<<i<<": B-" <<"\n";
                break;
            case 50 ... 54:
                cout<<"Case "<<i<<": C" <<"\n";
                break;
            case 45 ... 49:
                cout<<"Case "<<i<<": D" <<"\n";
                break;
            default:
                cout<<"Case "<<i<<": F"<<"\n";
        }
    }
}

