#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d,x,y,n;
	ifstream cin("11498.in");
	ofstream cout("11498.out");
	//cin>>n;
    //cin>>a>>b;

    while(cin>>n>>a>>b)
	for(int i=0; i<n; i++)
	{
        cin>>c>>d;
        x=a-c;
        y=b-d;

        if(x<0 && y<0)
            cout<<"NE"<<endl;
        else if(x<0 && y>0)
            cout<<"SE"<<endl;
        else if(x>0 && y>0)
            cout<<"SO"<<endl;
        else if(x>0 && y<0)
            cout<<"NO"<<endl;
        else
            cout<<"divisa"<<endl;
	}
}
