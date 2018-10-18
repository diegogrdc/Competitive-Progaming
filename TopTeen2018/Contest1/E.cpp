//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int num;

void invierte( int x )
{
    bool leadingZero = true;
    for( int i = 1; i <= 3; i ++ )
    {
        if( x % 10 != 0 )
            leadingZero = false;
        if( leadingZero == false )
            cout << x % 10;
        x /= 10;
    }
}

int main()
{
    cin >> num;
    invierte( num );
    return 0;
}
