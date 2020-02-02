#include<bits/stdc++.h>
using namespace std;

main()
{
    //ifstream cin("11727.in");
    //ofstream cout("11727.out");
    int n, a,b,c;
    cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b>>c;
            if(a>b)
            {
                if(a>c)
                {
                    if(b>c)
                    {
                        cout<<"Case "<<i<<": "<<b<<endl;
                    }
                    else
                    {
                        cout<<"Case "<<i<<": "<<c<<endl;
                    }
                }
                else
                {
                    cout<<"Case "<<i<<": "<<a<<endl;

                }
            }
            else if(b>a)
            {
                if(b>c)
                {
                    if(c>a)
                    {
                        cout<<"Case "<<i<<": "<<c<<endl;

                    }
                    else
                        cout<<"Case "<<i<<": "<<a<<endl;
                }
                else
                    cout<<"Case "<<i<<": "<<b<<endl;
            }
            else
                cout<<"Case "<<i<<": "<<a<<endl;
        }
}
