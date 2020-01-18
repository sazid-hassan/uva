#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin("458.in");
    //ofstream cout("458.out");

    string in_string;
    int a;
    char b;
    while(cin>>in_string){
    //cin>>in_string;
    for(int i=0; i<in_string.length();i++)
    {

        a = in_string[i]-7;
        //cout<<a<<" ";
        b= char(a);
        cout<<b;
    }
    cout<<endl;
    }

}
