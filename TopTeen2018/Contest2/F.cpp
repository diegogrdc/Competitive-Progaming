//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;
char a[205];
char b[205];

int pasos( int a , int b )
{
    if( a > b )
        swap( a , b );
    int p1 = b - a;
    int p2 = 10 - p1;
    return min( p1 , p2 );
}

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> a[i];
    
    for( int i = 1; i <= N; i ++ )  
        cin >> b[i];
        
    for( int i = 1; i <= N; i ++ )
        ans += pasos( a[i] - '0' , b[i] - '0' );
    
    cout << ans;
    return 0;
}
