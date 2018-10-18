//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 200005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int D, M, A;

int month( int x )
{
    if( x == 2 )
    {
        if( A % 5 == 0 )
            return 58;
        else
            return 59;
    }
    else
        return 57;
}

int year( int x )
{
    if( x % 5 == 0 )
        return 685;
    else
        return 686;
}

int main()
{
    optimiza_io
    cin >> D >> M >> A;
    A -= 2000;
    for( int i = 1; i < A; i ++ )
        D += year( i );
    for( int i = 1; i < M; i ++ )
        D += month( i );
    D %= 7;
    if( D == 0 ) D = 7;
    cout << D;
    return 0;
}
