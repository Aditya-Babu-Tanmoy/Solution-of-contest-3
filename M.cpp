/*Determine whether two axis parallel rectangles intersect or not.
 A rectangle is represented by two co-ordinates, bottom-left and
top-right points of the rectangle. Two rectangles intersect if the
area of overlapped region is strictly positive.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)// For the test cases
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;

        (x1>=x4 || x3>=x2 || y1>=y4 || y3>=y2) ? cout<<"Case "<<i<<": No\n" : cout<<"Case "<<i<<": Yes\n"; // intersects when X1, X3, Y1, Y3 is greater than X4, X2, Y4, Y2
    }
    return 0;
}

