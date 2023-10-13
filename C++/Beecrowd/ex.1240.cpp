#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, a, b, digitos, v;
    vector<string> resp;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> a >> b;
        //modo de descobrir quantos digitos têm em um número inteiro
        digitos = static_cast<int>(log10(b) + 1);
        v = pow(10, digitos);
        //modo de descobrir se os ultimos digitos do primeiro numero sao o segundo numero
        if ((a % v) == b){
            resp.push_back("encaixa");
        } else {
            resp.push_back("nao encaixa");
        }
    }

    for (string r : resp){
        cout << r << endl;
    }

    return 0;
}