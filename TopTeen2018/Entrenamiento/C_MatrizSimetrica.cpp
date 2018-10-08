//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N;
int num[55][55];

int main()
{
    cin >> N;
    for( int i = 1; i <= N; i ++ )
        for( int j = 1; j <= N; j ++ )
            cin >> num[i][j];
            
    for( int i = 1; i <= N; i ++ )
        for( int j = 1; j <= N; j ++ )
            if( num[i][j] != num[j][i] )
            {
                cout << "NO\n";
                return 0;
            }
    cout << "SI\n";
    return 0;
}
