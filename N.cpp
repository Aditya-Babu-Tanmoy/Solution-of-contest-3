/*Given an infinite chess board and a starting position (r1, c1)
find how many moves a traditional chess king will need to move to
another position (r2, c2). In case you do not know how a chess king
moves, a traditional chess king can go to any of its 8 adjacent cells
in a single move as shown in the picture below: */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)// For the test cases
    {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int m=max(abs(x2-x1), abs(y2-y1)); // Determine the maximum value of two difference
        cout<<"Case "<<i<<": "<<m<< "\n";
    }
    return 0;
}
