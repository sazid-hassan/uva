#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("10055.in");
    //ofstream cout("10055.out");

    unsigned long long int a, b, n;
    while(cin >> a >> b)
    {
        if(b>a)
            cout<<b-a<<endl;
        else
            cout<<a-b<<endl;
    }
    //cout<<endl;
}
