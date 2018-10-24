//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;
int a[55];
int b[55];

int main()
{
    cin >> N;
    for( int i = 0; i < N; i ++ )
        cin >> a[i];
    
    for( int i = 0; i < N; i ++ )
        cin >> b[i]; 
    
    sort( a , a + N );
    sort( b , b + N );
    
    for( int i = N-1; i >= 0; i -- )
        for( int j = N-1; j >= 0; j -- )
            if( b[j] > 0 && b[j] < a[i] )
            {
                ans += a[i];
                b[j] = 0;
                break;
            }
    cout << ans;
    return 0;
}
