#include <bits/stdc++.h>

using namespace std;

int main(){
    int comprimento, pedagios, quantidade_pedagios = 0, custo_quilometro, custo_pedagio, custo_total = 0;

    cin >> comprimento >> pedagios;
    cin >> custo_quilometro >> custo_pedagio;

    quantidade_pedagios = comprimento/pedagios;

    custo_total = (comprimento*custo_quilometro) + (quantidade_pedagios*custo_pedagio);

    cout << custo_total << endl;

    return 0;
}