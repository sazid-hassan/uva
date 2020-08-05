#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    //freopen ("10189.in", "r", stdin);
    //freopen ("10189.out", "w", stdout);
    //ifstream cin("10189.in");
    //ofstream cout("10189.out");
    int m, n, t = 0;

    while (true) {
        cin >> m >> n;
        char input[m][n];
        int output[m][n] = {0};

        if (m == 0 && n == 0) break;
        if(t > 0) cout << endl;

        for (int i = 0; i < m; i++) {
            string line;
            cin >> line;
            for (int j = 0; j < n; j++) {
                input[i][j] = line[j];
                output[i][j] = 0;
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (input[i][j] == '*') {
                    if (i - 1 >= 0 && j - 1 >= 0) {
                        output[i - 1][j - 1]++;
                    }
                    if (i - 1 >= 0 && j >= 0) {
                        output[i - 1][j]++;
                    }
                    if (i - 1 >= 0 && j + 1 < n) {
                        output[i - 1][j + 1]++;
                    }
                    if (j - 1 >= 0) {
                        output[i][j - 1]++;
                    }
                    if (j + 1 < n) {
                        output[i][j + 1]++;
                    }
                    if (i + 1 < m && j - 1 >= 0) {
                        output[i + 1][j - 1]++;
                    }
                    if (i + 1 < m) {
                        output[i + 1][j]++;
                    }
                    if (i + 1 < m && j + 1 < n) {
                        output[i + 1][j + 1]++;
                    }
                    output[i][j] = 9;
                }
            }
        }
        t++;
        cout << "Field #" << t << ":" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (output[i][j] >= 9)
                    cout << "*";
                else
                    cout << output[i][j];
            }
            cout << endl;
        }
    }
}
