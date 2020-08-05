#include <bits/stdc++.h>
using namespace std;
int main()
{
    char in1[300], in2[300];
    long long size, size1, size2, num1[300], num2[300];
    while (cin >> in1 >> in2)
    {
        long long result[600] = {0};
        size1 = strlen(in1);
        size2 = strlen(in2);
        for (int i = size1 - 1; i >= 0; i--)
        {
            num1[size1 - 1 - i] = in1[i] - '0';
        }
        for (int i = size2 - 1; i >= 0; i--)
        {
            num2[size2 - 1 - i] = in2[i] - '0';
        }
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                result[i + j] += num1[i] * num2[j];
                result[i + j + 1] += result[i + j] / 10;
                result[i + j] %= 10;
            }
        }
        size = size1 + size2;
        while (result[size] == 0 && size > 0)
            size--;
        for (int i = size; i >= 0; i--)
            cout << result[i];
        cout << endl;
    }
    return 0;
}