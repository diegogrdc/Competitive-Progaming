//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
using namespace std;

int N;
int num[1005];

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> num[i];
    int l = 1;
    int r = N;
    while( l <= N )
    {
        if( num[l] != num[r] )
        {
            cout << "NO\n";
            return 0;
        }
        l++;
        r--;
    }
    cout << "SI\n";
    return 0;
}
