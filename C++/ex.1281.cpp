#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M, quantidade_desejada, quer; 
    map<string, double> produtos;
    map<string, int> desejados;
    string nome, nome_desejado;
    double preco;

    cin >> N;

    double resultados[N];

    for (int i=0; i<N; i++){ 
        double soma=0.0;
        produtos.clear();
        desejados.clear();
        cin >> M;
        for (int j=0; j<M; j++){
            cin >> nome >> preco;
            produtos.insert(pair<string, double>(nome, preco));
        }

        cin >> quer;
        for (int h=0; h<quer; h++){
            cin >> nome_desejado >> quantidade_desejada;
            desejados.insert(pair<string, int>(nome_desejado, quantidade_desejada));
        }

        for (auto it = desejados.begin(); it != desejados.end(); ++it) {
            auto a = produtos.find((*it).first);
            if (a != produtos.end()) {
                soma = (soma + (((*it).second)*((*a).second)));
            }
        }

        resultados[i] = soma;

    }

    cout << fixed << setprecision(2);

    for (int i=0; i<N; i++){
        cout << "R$ " << resultados[i] << endl;
    }
    
    return 0;
}