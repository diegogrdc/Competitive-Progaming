//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

string s;
int main()
{
    cin >> s;
    cout << "if(";
    int pos = 0;
    while( s[pos] != '?' )
        cout << s[pos++];
    pos++;
    cout << ")\n     "; 
    while( s[pos] != ':' )
        cout << s[pos++];
    pos++;
    cout << ";\nelse\n     ";
    while( pos < s.size() )
        cout << s[pos++];
    cout << ";\n";
    return 0;
}
