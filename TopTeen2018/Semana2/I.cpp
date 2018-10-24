//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int A, B;
int main()
{
    cin >> A >> B;
    if( A > B )
        swap( A , B );
    while( A < B )
        A *= 2;
    if( A == B )
        cout << "felizmil";
    else
        cout << "tristemil";
    return 0;
}
