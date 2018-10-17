//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

bool sePuede[305];
int N, A, B;

int main()
{
    cin >> N >> A >> B;
    
    // Genera Cajas
    for( int i = 0; i * A <= 300; i ++ )
        for( int j = 0; i * A + j * B <= 300; j ++ )
            sePuede[i * A + j * B] = 1;
            
    for( int i = 1; i <= N; i ++ )
    {
        int num;
        cin >> num;
        if( sePuede[num] == 1 )
            cout << "Si\n";
        else
            cout << "No\n";
    }
    return 0;
}
