#include <bits/stdc++.h>
using namespace std;

bool uglytest(int number_series)
{
    while (number_series % 2 == 0)
    {
        number_series /= 2;
    }
    while (number_series % 3 == 0)
    {
        number_series /= 3;
    }
    while (number_series % 5 == 0)
    {
        number_series /= 5;
    }

    return (number_series == 1) ? true : false;
}

main()
{
    int number_series = 0, count = 0;
    for (int i = 0; count <= 1499; i++)
    {
        number_series++;
        if (uglytest(number_series))
        {
            count++;
        }
    }
    cout << "The 1500'th ugly number is " << number_series << endl;
}