#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    string entrada;
    stack<char> pilha;
    list<char> respostas;

    cin >> T;

    for (int i=0; i<T; i++){
        cin >> entrada;
        bool bem_definida=true;
        for (int i = 0; i < entrada.size(); i++) {
            if (entrada[i] == '(' || entrada[i] == '[' || entrada[i] == '{') {
                pilha.push(entrada[i]);
            } else {
                if (pilha.empty()) {
                    bem_definida=false;
                    break;
                }
                char topo = pilha.top();
                pilha.pop();
                if(entrada[i]==')' && topo!='('){
                    bem_definida=false;
                    break;
                } else if (entrada[i]==']' && topo!='['){
                    bem_definida=false;
                    break;
                } else if (entrada[i]=='}' && topo!='{'){
                    bem_definida=false;
                    break;
                } 
            }
        }

        if (bem_definida && pilha.empty()) {
            respostas.push_back('S');
        } else {
            respostas.push_back('N');
        }
        
        while (!pilha.empty()) {
            pilha.pop();
            bem_definida = false;
        }
    }

    for (auto resposta : respostas){
         cout << resposta << endl;
    }


    return 0;
}