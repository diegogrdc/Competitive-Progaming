//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, K, ans;
int num[1005];

int main()
{
    cin >> N >> K;
    for( int i = 0; i < N; i ++ )
        cin >> num[i];
    sort( num , num + N );
    for( int i = 0; i < N; i ++ )
        if( K >= num[i] )
        {
            ans++;
            K -= num[i];
        }
    cout << ans;
    return 0;
}
