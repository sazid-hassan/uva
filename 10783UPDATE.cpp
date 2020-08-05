#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin("10783.in");
    //ofstream cout("10783.out");
    int t, a, n, sum=0;

    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            cin>>a>>n;
            sum = 0;
            /*for(int j=a; j<=n; j+=2)
            {

                sum += j;
            }*/
            if(a%2!=0){
                sum = ((n+1)/2)*((n+1)/2)- ((a-1)/2)*((a-1)/2);
            }
            else
            {
                a=a+1;
                sum = ((n+1)/2)*((n+1)/2)- ((a-1)/2)*((a-1)/2);
            }
            cout<<"Case "<<i<<": "<<sum<<endl;
        }
    }

}
