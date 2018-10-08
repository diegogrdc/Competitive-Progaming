//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.

#include<iostream>
using namespace std;

int arr[5]{580,980,1190,1250,1420};

int main()
{
    int N;
    cin >> N;
    for( int i = 0; i <= 3; i ++ )
        if( N >= arr[i] && N <= arr[i + 1] )
        {
            if( N - arr[i] < arr[i + 1] - N )
                cout << "atras " << N - arr[i] << "\n";
            else
                cout << "adelante " << arr[i + 1] - N << "\n";
            return 0;
        }
    if( N < 540 or N > 1520 )
        cout << "error\n";
    else if( N < 580 )
        cout << "adelante " << 580 - N;
    else
        cout << "atras " << 1420 - N << "\n";
    return 0;
}
