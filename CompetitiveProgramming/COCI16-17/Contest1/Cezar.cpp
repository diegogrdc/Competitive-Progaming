//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<bits/stdc++.h>
#define MAX 105
#define ALPHA 30
#define optimiza_io cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
typedef long long i64;

int N, tot;
string word[MAX];
int in[MAX];
int ord[MAX];
int ady[ALPHA][ALPHA];
bool existe[MAX];
vector < int > adyy[MAX];
queue < int > q;
queue < int > ans;
char tmp[40];

int main()
{
    optimiza_io
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> word[i];
    for( int i = 1; i <= N; i ++ )
        cin >> ord[i];
    for( int i = 1; i <= N; i ++ )
        for( int j = i + 1; j <= N; j ++ )
        {
            int a = ord[i], b = ord[j];
            int idx = 0;
            while( idx < (int)word[a].size() && idx < (int)word[b].size() && word[a][idx] == word[b][idx] ) idx++;
            if( idx < (int)word[a].size() && idx < (int)word[b].size() )
                ady[word[a][idx] - 'a' + 1][word[b][idx] - 'a' + 1] = 1;
            else if( word[a].size() > word[b].size() )
            {
                cout << "NE\n";
                return 0;
            }
        }
    for( int i = 1; i <= 26; i ++ )
        for( int j = 1; j <= 26; j ++ )
            if( ady[i][j] )
            {
                in[j]++;
                adyy[i].push_back( j );
                existe[i] = 1;
                existe[j] = 1;
            }
    for( int i = 1; i <= 26; i ++ )
        if( ! in[i] && existe[i] )
            q.push( i );
    while( ! q.empty() )
    {
        int x = q.front(); q.pop();
        ans.push( x );
        for( auto v : adyy[x] )
        {
            in[v]--;
            if( ! in[v] )
                q.push( v );
        }
    }  
    for( int i = 1; i <= 26; i ++ )
        if( ! existe[i] )
            ans.push( i );
    int cnt = 0;
    if( ans.size() != 26 )
        cout << "NE\n";
    else
    {
        cout << "DA\n";
        while( ! ans.empty() )
        {
            tmp[ans.front()] = 'a' + cnt;
            cnt++;
            ans.pop();
        }
    }
    for( int i = 1; i <= 26; i ++ )
        cout << tmp[i];
    cout << "\n";
    return 0;
}
