#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin("10110.in");
    //ofstream cout("10110.out");
    while (true)
    {
        long long int n, count = 0;

        scanf("%lld", &n);

        long long int temp = sqrt(n);

        if (n == 0)
        {
            break;
        }
        else
        {
            if (temp * temp == n)
            {
                printf("yes\n");
            }
            else
                printf("no\n");
        }
    }
}
