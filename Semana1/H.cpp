//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N, ans;
int sum( int x )
{
    return ( x * ( x + 1 ) ) / 2;
}

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        ans += sum( i );
    
    cout << ans;
    return 0;
}
