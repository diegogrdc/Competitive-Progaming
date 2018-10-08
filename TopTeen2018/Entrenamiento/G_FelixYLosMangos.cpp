//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

long long int K, D, N, total;
int main()
{
    cin >> K >> D >> N;
    total = K * ( N * ( N + 1 ) / 2 );
    if( total <= D )
        cout << "0\n";
    else
        cout << total - D << "\n";
    return 0;
}
