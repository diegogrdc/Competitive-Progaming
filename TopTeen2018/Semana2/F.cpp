//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, K;
int a[100005];

int main()
{
    cin >> N >> K;
    if( K == N )
    {
        cout << "-1\n";
        return 0;
    }
    for( int i = 1; i <= N; i ++ )
        a[i] = i;
        
    int pos = N;
    int buenos = N-1;
    while( buenos - 2 >= K )
    {
        swap( a[pos] , a[pos - 1] );
        pos -= 2;
        buenos -= 2;
    }
    
    if( buenos > K )
        swap( a[1] , a[2] );
        
    for( int i  = 1; i <= N; i ++ )
        cout << a[i] << " ";
        
    return 0;
}
