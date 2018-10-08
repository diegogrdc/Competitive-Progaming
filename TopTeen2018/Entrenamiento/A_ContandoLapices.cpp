//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N, K, cnt, num;

int main()
{
    cin >> N >> K;
    for( int i = 1; i <= N; i ++ )
    {
        cin >> num;
        if( num == K )
            cnt++;
    }
    cout << cnt;
    return 0;
}
