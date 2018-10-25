//  Copyright © 2018 Diego Garcia Rodriguez del Campo. All rights reserved.
#include<bits/stdc++.h>
using namespace std;

int N, K, Q;
int cost[100005];
int grupo[100005];
int maxgrupo[100005];
long long ans;

int main()
{
    cin >> N >> K >> Q;
    for( int i = 1; i <= N; i ++ )
        cin >> cost[i];
        
    for( int g = 1; g <= K; g ++ )
    {
        int tam;
        cin >> tam;
        // Estamos procesando los regalos del grupo g
        for( int i = 0; i < tam; i ++ )
        {
            int x;
            cin >> x;
            // El articulo x está en el grupo g, pues es el grupo que estamos procesando
            grupo[x] = g;
            // El artículo más caro del grupo g puede ser el costo del árticulo x, o algo que ya habiamos procesado
            maxgrupo[g] = max( maxgrupo[g] , cost[x] );
        }
    }
    for( int q = 0; q < Q; q ++ )
    {
        int x;
        cin >> x;
        // El grupo de x es grupo[x], y queremos sumar a la respuesta lo más caro de ese grupo
        ans += maxgrupo[grupo[x]];
    }
    cout << ans;
    return 0;
}
