//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 100005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int X, N , aux, sum;

int main()
{
    optimiza_io
    cin >> X >> N;
    for( int i = 0; i < N; i ++ )
    {
        cin >> aux;
        sum += aux;
    }
    cout << X * ( N + 1 ) - sum << "\n";
    return 0;
}
