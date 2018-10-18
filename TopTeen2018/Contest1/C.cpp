//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int fila[5];
int col[5];
int diag1, diag2, num;

int main()
{
    for( int i = 1; i <= 3; i ++ )
        for( int j = 1; j <= 3; j ++ )
        {
            cin >> num;
            fila[i] += num;
            col[j] += num;
            if( i == j )
                diag1 += num;
            if( i == 3 - j + 1 )
                diag2 += num;
        }
    bool magico = true;
    for( int i = 1; i <= 3; i ++ )
        if( fila[i] != 15 or col[i] != 15 )
            magico = false;
    if( magico && diag1 == 15 && diag2 == 15 )
        cout << "SI\n";
    else
        cout << "NO\n";
    return 0;
}
