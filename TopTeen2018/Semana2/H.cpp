//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int H, M, S;
int main()
{
    cin >> H >> M >> S;
    S++;
    M += S / 60;
    S %= 60;
    H += M / 60;
    M %= 60;
    H %= 24;
    cout << H << " " << M << " " << S;
    return 0;
}
