#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int digitos, n, numero;
    vector<int> respostas;

    while (cin >> n){
        digitos = 1;
        numero = 1;
        
        while (numero % n != 0) {
            numero = (10 * numero + 1);
            digitos++;
        }
        respostas.push_back(digitos);
    }

    for (int r : respostas){
        cout << r << endl;
    }

    return 0;
}