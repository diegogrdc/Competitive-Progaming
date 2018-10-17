//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
using namespace std;

int N, total, ans, sum;
int coin[105];

int main()
{
    cin >> N;
    for( int i = 0; i < N; i ++ )
    {
        cin >> coin[i];
        total += coin[i];
    }
    
    sort( coin , coin + N );
    
    for( int i = N-1; i >= 0; i -- )
    {
        ans++;
        sum += coin[i];
        if( 2*sum > total )
            break;
    }
    
    cout << ans;
    return 0;
}
