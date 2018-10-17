//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N;
double total, num;

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
    {
        cin >> num;
        total += num;
    }
    cout << fixed << setprecision( 2 ) << total / N << "\n";
    return 0;
}
