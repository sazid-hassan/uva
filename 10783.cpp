#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    ifstream cin("10783.in");
    ofstream cout("10783.out");
    int a,b,n,sum;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        sum =0;

        for(int j=a; j<=b; j++)
        {
            if(j%2!=0)

                sum=sum+j;

        }
        cout<<"Case "<<i+1<<": " <<sum<<endl;
    }
    //cout<<endl;

}
