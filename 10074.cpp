#include<bits/stdc++.h>
using namespace std;

main()
{   
    int r1, c1, count;
    int map[r1][c1];
    while(cin>>r1>>c1)
    {
        for(int i=1; i<=r1; i++)
        {
            for(int j=1; j<=c1; j++)
            {
                count=0;
                cin>>map[i][j];
                if(map[i][j]=0)
                {
                    count=count+1;
                }
            }
        }
               
    }
}