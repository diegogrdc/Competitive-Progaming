//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N, ans;
int a[1005];

int main()
{
    
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> a[i];
    ans = abs( a[1] - a[2] );
    
    for( int i = 1; i <= N; i ++ )
        for( int j = i + 1; j <= N; j ++ )
            ans = min( ans , abs( a[i] - a[j] ) );
    
    cout << ans << "\n";
    return 0;
}
