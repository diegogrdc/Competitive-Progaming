//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, ans;

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i *= 10 )
        ans += ( N - i + 1 );
    cout << ans;
    return 0;
}
