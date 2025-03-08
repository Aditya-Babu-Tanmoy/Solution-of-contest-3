/// Given base and height of a triangle, print twice the area of that triangle.
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)// For test cases
    {
        long long int x, n;
        cin>>x>>n;
        cout<<"Case "<<i<<": "<<x*n<<"\n";// print the area x*n
    }
}

