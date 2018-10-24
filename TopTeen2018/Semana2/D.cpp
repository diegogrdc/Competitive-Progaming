//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N;
int a[1005];
int b[1005];

int main()
{
    cin >> N;
    for( int i = 0; i < N; i ++ )
        cin >> a[i];
        
    for( int i = 0; i < N; i ++ )
        cin >> b[i];
        
    sort( a , a + N );
    sort( b , b + N );
    
    for( int i = 0; i < N; i ++ )
        if( a[i] != b[i] )
        {
            cout << "NO\n";
            return 0;
        }
    cout << "SI\n";
    return 0;
}
