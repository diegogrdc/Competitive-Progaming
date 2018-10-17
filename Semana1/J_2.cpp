//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

bool dp[305];
int N, A, B;

int main()
{
    cin >> N >> A >> B;
    
    // Genera Cajas
    dp[0] = 1;
    for( int i = 1; i <= 300; i ++ )
        if( ( i - A >= 0 && dp[i - A] ) || ( i - B >= 0 && dp[i - B] ) )
            dp[i] = 1;
            
    for( int i = 1; i <= N; i ++ )
    {
        int num;
        cin >> num;
        if( dp[num] )
            cout << "Si\n";
        else
            cout << "No\n";
    }
    return 0;
}
