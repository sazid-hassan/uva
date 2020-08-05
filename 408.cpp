#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, modulas, remainder;

    while (true)
    {
        cin >> number >> modulas;

        int values[modulas], i = 0;

        remainder = number % modulas;

        while (remainder != 0)
        {
            values[i] = remainder;

            remainder = (number + remainder) % modulas;

            if (remainder == 0)
            {
                cout << "Bad Choice" << endl;
                cout<<endl;
                break;
            }
            else
            {
                i++;

                if (i == modulas - 2)
                {
                    cout << "Good Choice" << endl;
                    cout<<endl;
                    break;
                }
            }
        }
    }
}