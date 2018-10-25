//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;
char M[100005]; // Mensaje Original
char E[100005]; // Encripción Incorrecta
int cnt[30];

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        cin >> M[i];
        
    for( int i = 1; i <= N; i ++ )
        cin >> E[i];
        
    for( int i = 1; i <= N; i ++ )
    {
        int diff = E[i] - M[i];
        if( diff < 0 )
            diff += 26;
        cnt[diff]++;
        ans = max( ans , cnt[diff] );
    }
    
    for( int i = 0; i < 26; i ++ )
        if( cnt[i] == ans )
        {
            cout << i << "\n";
            for( int j = 1; j <= N; j ++ )
            {
                int pos = M[j] - 'A';
                pos += i;
                pos %= 26;
                char let = pos + 'A';
                cout << let;
            }
            return 0;
        }
    return 0;
}
