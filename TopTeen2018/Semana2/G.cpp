//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N;
int val[9]{100,90,50,40,10,9,5,4,1};
string let[9]{"C","XC","L","XL","X","IX","V","IV","I"};

int main()
{
    cin >> N;
    for( int i = 0; i < 9; i ++ )
        while( val[i] <= N )
        {
            N -= val[i];
            cout << let[i];
        }
    return 0;
}
