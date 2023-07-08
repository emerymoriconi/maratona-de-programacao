#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, aux=0, diamantes;
    string entrada;

    list<int> lista;

    cin >> N;

    for (int i=0; i<N; i++){
        
        cin >> entrada;

        stack<char> pilha;

        int tamanho = entrada.length();
        diamantes = 0;

        for (auto elemento : entrada){
            if (elemento=='.'){
                continue;
            }

            if (elemento=='<'){
                pilha.push(elemento);
            } else {
                if (!pilha.empty()){
                    diamantes++;
                    pilha.pop();
                }
            }
        } 
        lista.push_back(diamantes);
    }


    for (auto x : lista){
        cout << x << endl;
    }
    
    return 0;
}