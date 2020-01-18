#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("input.txt");
    //ofstream cout("output.txt");

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
