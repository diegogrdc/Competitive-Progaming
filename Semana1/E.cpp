//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int N;
bool inFib[30005];

int main()
{
    // Genera Secuencia
    int a = 1, b = 1;
    inFib[a] = 1;
    while( a + b <= 30000 )
    {
        int c = a + b;
        a = b;
        b = c;
        inFib[c] = 1;
    }
    
    cin >> N;
    for( int i = 2; i < N; i ++ )
        if( inFib[i] == 0 )
            cout << i << " ";
    return 0;
}
