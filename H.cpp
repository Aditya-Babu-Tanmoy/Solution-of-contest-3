/// Print all triplets (x, y, z) where x ≤ A, y ≤ B,
/// z ≤ C (0 ≤ A,B,C ≤ 20) and x < y < z in ascending order.
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i=1; i<=t; i++)// For the test cases
    {
        int A, B, C;
        cin>>A>>B>>C;

        cout <<"Case "<<i<<":"<<"\n";

        for(int x=0; x<=A; x++)
            for(int y=x+1; y<=B; y++)
                for(int z=y+1; z<=C; z++)
                    cout<<x<<" "<<y<<" "<<z<<"\n";

    }

    return 0;
}

