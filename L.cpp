/*You will be given time duration in seconds, you have to convert
it into years, months, days, hours, minutes and seconds.
You can assume that, 1 year = 12 months, 1 month = 30 days,
 1 day = 24 hours, 1 hour = 60 minutes and 1 minute = 60 seconds.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)// For the test cases
    {
        long long n;
        cin >> n;

        long long years = n /31104000;
        n%=31104000;

        long long months = n/2592000;
        n%=2592000;

        long long days = n/86400;
        n%=86400;

        long long hours=n/3600;
        n%=3600;

        long long minutes= n/60;
        long long seconds= n%60;

        cout<<"Case "<<i<<": ";
        if(years)
            cout<<years<<(years == 1 ? " year " : " years ");
        if(months)
            cout<<months<< (months == 1 ? " month " : " months ");
        if(days)
            cout<<days<<(days == 1 ? " day " : " days ");
        if(hours)
            cout<<hours<<(hours == 1 ? " hour " : " hours ");
        if(minutes)
            cout<<minutes<<(minutes == 1 ? " minute " : " minutes ");
        if(seconds)
            cout<<seconds<<(seconds == 1 ? " second" : " seconds");

        cout<<"\n";
    }
    return 0;
}
