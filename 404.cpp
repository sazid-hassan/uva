#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int step, mode, temp;

    while(cin>>step>>mode)
    {
        temp = gcd(step, mode);

        if(temp == 1)
        {
            printf("%10d%10d Good Choice", step, mode);
        }
        else
        {
            printf("%10d%10d Bad Choice", step, mode);
        }
        
        cout<<endl;
    }
}