//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

long long N, sum, menImp, num;

int main()
{
    cin >> N;
    menImp = -1;
    for( int i = 1; i <= N; i ++ )
    {
        cin >> num;
        sum += num;
        if( num % 2 != 0 && ( menImp == -1 || menImp > num ) )
            menImp = num;
    }
    if( menImp == -1 )
        cout << "0\n";
    else if( sum % 2 != 0 )
        cout << sum;
    else
        cout << sum - menImp;
    return 0;
}
