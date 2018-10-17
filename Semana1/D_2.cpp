//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;
int a[1005];

int main()
{
    
    cin >> N;
    for( int i = 0; i < N; i ++ )
        cin >> a[i];
        
    sort( a , a + N );
    ans = abs( a[1] - a[0] );
    
    for( int i = 1; i < N; i ++ )
        ans = min( ans , abs( a[i] - a[i - 1] ) );
        
    cout << ans << "\n";
    return 0;
}
