//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;


int N, U, D, mins, pos;

int main()
{
    cin >> N >> U >> D;
    while( pos < N )
    {
        pos += U;
        mins++;
        if( pos >= N ) 
            break;
        mins++;
        pos -= D;
    }
    cout << mins;
    return 0;
}
