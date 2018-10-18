//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, num, tot;

int main()
{
    cin >> N;
    for( int i = 1; i < N; i ++ )
    {
        cin >> num;
        tot += num;
    }
    cout << ( N * ( N + 1 ) / 2 ) - tot << "\n";
    return 0;
}
