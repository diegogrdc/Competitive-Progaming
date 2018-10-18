//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int D, M, A;

int main()
{
    cin >> D >> M >> A;
    // Resta 2000 años para que el primer dia se vuelva 1 1 1
    A -= 2000;
    // Por cada año completo, suma 686 dias, y resta 1 por cada año bisiesto 
    D += ( ( A - 1 ) * 686 ) - ( ( A - 1 ) / 5 );
    // Suma 57 por cada mes pasado
    D += ( ( M - 1 ) * 57 ) ;
    // Suma dos dias si ya paso febrero
    if( M >= 3 )
        D += 2;
    // Quita uno si es año bisiesto
    if( A % 5 == 0 && M >= 3 )
        D--;
    // Modula la respuesta 
    D %= 7;
    // Si el modulo da 0, la respuesta que debemos imprimir es 7
    if( D == 0 )
        D = 7;
    // Imprime la respuesta
    cout << D;
    return 0;
}
