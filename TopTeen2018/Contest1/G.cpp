//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, num, tot;

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
    {
        cin >> num;
        tot += num;
    }
    if( tot > 0 )
        cout << "POSITIVO\n";
    else if( tot < 0 )
        cout << "NEGATIVO\n";
    else
        cout << "BALANCEADO\n";
    return 0;
}
