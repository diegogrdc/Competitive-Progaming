//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans, T;
int main()
{
    cin >> T;
    for( int t = 0; t < T; t ++ )
    {
        ans = 0;
        cin >> N;
        for( int i = 1; i <= N; i ++ )
        {
            string s;
            cin >> s;
            if( s == "oveja" )
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
