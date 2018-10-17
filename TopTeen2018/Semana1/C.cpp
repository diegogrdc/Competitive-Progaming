//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N, num, ans;
int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
    {
        cin >> num;
        ans = max( num , ans );
    }
    cout << ans;
    return 0;
}
