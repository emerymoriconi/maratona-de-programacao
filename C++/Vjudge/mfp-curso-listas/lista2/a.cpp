#include <bits/stdc++.h>

using namespace std;

/* 
set <int> s; --> usado quando não se pode ter elementos repetidos e a ordem dos elementos importa. O (logn) para inserir, remover e buscar elementos

unordered_set <int> s; --> usado quando não se pode ter elementos repetidos e a ordem dos elementos não importa

map <int, int> m; --> usado quando se quer associar um valor a outro valor, como por exemplo, associar um nome a uma idade. O (logn) para inserir, remover e buscar elementos. Chave e valor podem ser de tipos diferentes. A chave não pode ser repetida. A chave é ordenada.

unordered_map <int, int> m; --> usado quando a ordem dos elementos não importa

stack <int> s; --> usado quando se quer uma pilha. O (1) para inserir e remover elementos.

queue <int> q; --> usado quando se quer uma fila. O (1) para inserir e remover elementos.

priority_queue <int> pq; --> usado quando se quer uma fila de prioridade. O (logn) para inserir e remover elementos. O maior elemento ou o menor elemento fica sempre no topo da fila. Os elementos são ordenados. 

deque <int> d; --> usado quando se quer uma fila dupla, ou seja uma fila que pode inserir e remover elementos no início e no final. O (1) para inserir e remover elementos.

vector <int> v; --> usado quando se quer um vetor dinâmico. O (1) para inserir elementos no final. O (n) para inserir elementos no início. O (n) para remover elementos no início. O (1) para remover elementos no final. O (1) para buscar elementos.
*/

int main(){
    string S;

    cin >> S;

    if (S == "ACE" || S == "BDF" || S == "CEG" || S == "DFA" || S == "EGB" || S == "FAC" || S == "GBD"){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}