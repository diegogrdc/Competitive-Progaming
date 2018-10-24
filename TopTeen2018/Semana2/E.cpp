//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;
int a[1005];

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> a[i];
        
    for( int i = 1; i <= N; i ++ )
        for( int j = i + 1; j <= N; j ++ )
            if( a[i] > a[j] )
                ans++;
    cout << ans;
    return 0;
}
