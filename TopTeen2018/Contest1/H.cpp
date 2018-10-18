//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;
int alt[100005];

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> alt[i];
    int l = 1;
    while( l <= N )
    {
        int r = l;
        while( r + 1 <= N && alt[r] > alt[r + 1] )
            r++;
        ans = max( ans , r - l + 1 );
        l = r + 1;
    }
    cout << ans;
    return 0;
}
