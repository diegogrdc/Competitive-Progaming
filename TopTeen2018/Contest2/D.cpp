//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int A, B, C, ans, sobra;

int main()
{
    cin >> A >> B >> C;
    ans += C;
    sobra += C;
    ans += B / 2;
    if( B % 2 != 0 )
    {
        ans++;
        sobra += 2;
    }
    A -= sobra;
    if( A > 0 )
    {
        ans += A / 4;
        if( A % 4 != 0 )
            ans++;
    }
    
    cout << ans;
    return 0;
}
