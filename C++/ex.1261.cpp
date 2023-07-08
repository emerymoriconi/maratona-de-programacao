#include <bits/stdc++.h>
#include <list>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int M, N;
    string descricao, palavra;
    double valor;
    double soma;
    list<long long int> resultados;
    map<string, double> dicionario;

    cin >> M >> N; 

    for (int i=0; i<M; i++){
        cin >> palavra >> valor;
        dicionario.insert(pair<string, double>(palavra, valor));
    }

    for (int i=0; i<N; i++){
        soma=0.0;
        getline(cin, descricao, '.');

        stringstream iss(descricao);
    
        string word;

        while (iss >> word) {
            auto it = dicionario.find(word);
            if (it != dicionario.end()) {
                soma = soma + (*it).second;
            }
            
        }

        resultados.push_back(soma);

    }

    for (auto x : resultados){
        cout << x << endl;
    }

    return 0;
}
