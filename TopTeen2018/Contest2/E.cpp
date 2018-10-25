//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N;
bool rectangle, square;

int main()
{
    cin >> N;
    for( int i = 2; i * i <= N; i ++ )
    {
        if( N % i == 0 && i != N / i )
            rectangle = true;
        if( N % i == 0 && i == N / i )
            square = true;
    }
    if( square == true && rectangle == true )
        cout << "ambos\n";
    else if( square == true )
        cout << "cuadrado\n";
    else if( rectangle )
        cout << "rectangulo\n";
    else
        cout << "ninguno\n";
    return 0;
}
