//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N;
int a[1005];

int main()
{
    cin >> N;
    for( int i = 0; i < N; i ++ )
        cin >> a[i];
    
    sort( a , a + N );
    
    for( int i = N-1; i >= 0; i -- )
        cout << a[i] << " ";
    return 0;
}
