//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 100005
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, M, idx;
char a[14][MAX];
int vis[14][MAX];

int dfs( int x , int y )
{
    if( y == M )
        return vis[x][y] = y;
    // Subir 
    int mx = x - 1;
    int my = y + 1;
    if( ! mx ) mx = 1;
    if( vis[x][y] )
        return vis[x][y];
    int ans = y;
    if( a[mx][my] == '.' )
        ans = max( ans , dfs( mx , my ) );
    mx = x + 1;
    if( mx == 11 ) mx = 10;
    if( a[mx][my] == '.' )
        ans = max( ans , dfs( mx , my ) );
    return vis[x][y] = ans;
}

int main()
{
    // optimiza_io
    cin >> M;
    N = 10;
    for( int i = 1; i <= N; i ++ )
        for( int j = 1; j <= M; j ++ )
            cin >> a[i][j];
    dfs( 10 , 1 );
    int j = 10, moves = 0, subiendo = false;     
    for( int i = 1; i < M; i ++ )
    {
        int sigj = j + 1;
        if( sigj == 11 ) sigj--;
        if( vis[sigj][i + 1] == M )
        {
            idx = 0;
            j = sigj;
            subiendo = false;
        }
        else
        {
            sigj = j - 1;
            if( ! sigj ) sigj++;
            j = sigj;
            if( ! subiendo )
            {
                subiendo = true;
                idx = i + 1;
                moves++;
            }
        }
    }
    cout << moves << "\n";
    j = 10, subiendo = false, idx = 0; 
    for( int i = 1; i < M; i ++ )
    {
        int sigj = j + 1;
        if( sigj == 11 ) sigj--;
        if( vis[sigj][i + 1] == M )
        {
            if( subiendo ) cout << i - idx + 1 << "\n";
            idx = 0;
            j = sigj;
            subiendo = false;
        }
        else
        {
            sigj = j - 1;
            if( ! sigj ) sigj++;
            j = sigj;
            if( ! subiendo )
            {
                subiendo = true;
                idx = i + 1;
                cout << i - 1 << " ";
            }
        }
    }
    if( idx )
        cout << N - idx << "\n";
    return 0;
}
