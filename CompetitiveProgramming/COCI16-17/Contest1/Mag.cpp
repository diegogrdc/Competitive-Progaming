//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 1000005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, men;
int v[MAX];
vector < int > ady[MAX];

int main()
{
    optimiza_io
    ccin >> N;
    for( int i = 1; i < N; i ++ )
    {
        int a, b;
        ccin >> a >> b;
        ady[a].push_back( b );
        ady[b].push_back( a );
    }
    for( int i = 1; i <= N; i ++ )
    {
        ccin >> v[i];
        if( men > v[i] or i == 1 )
            men = v[i];
    }
    if( men > 1 )
    {
        ccout << men << "/1\n";
        return 0;
    }
    return 0;
}
