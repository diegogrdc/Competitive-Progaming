//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, cnt;
int main()
{
    cin >> N;
    while( ( N - 1 ) % 11 != 0 )
    {
        cnt++;
        N *= 2;
    }
    cout << cnt << " " << N;
    return 0;
}
