//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

string s1, s2;

int val( string s )
{
    int ans = 1;
    for( int i = 0; i < s.size(); i ++ )
        ans = ( ans * ( s[i] - 'A' + 1 ) ) % 47;
    return ans;
}

int main()
{
    cin >> s1 >> s2;
    if( val( s1 ) == val( s2 ) )
        cout << "GO\n";
    else
        cout << "STAY\n";
    return 0;
}
