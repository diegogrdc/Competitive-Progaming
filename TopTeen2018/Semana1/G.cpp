//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N;
int a[105];
int b[105];

int main()
{
    cin >> N;
    for( int i = 0; i < N; i ++ )
        cin >> a[i];
        
    for( int i = 0; i < N; i ++ )
        cin >> b[i];
        
    for( int i = 0; i < N; i ++ )
        cout << a[i] + b[i] << " ";
    return 0;
}
