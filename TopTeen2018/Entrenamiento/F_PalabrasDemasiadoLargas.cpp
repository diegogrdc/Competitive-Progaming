//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for( int t = 0; t < T; t ++ )
    {
        string s;
        cin >> s;
        int N = s.size();
        if( N <= 10 )
            cout << s << "\n";
        else
            cout << s[0] << N - 2 << s[N - 1] << "\n";
    }
    return 0;
}
