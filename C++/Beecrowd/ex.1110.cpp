#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=1, i;
    deque<int> pilha;
    
    int descartadas[50], remanescente = 0;

    while(n!=0){
        cin >> n;
        if (n!=0){
            while(n>=1){
                pilha.push_front(n);
                n--;
            }
            i=0;
            while (pilha.size()>=1){
                descartadas[i] = pilha.front();
                pilha.pop_front();

                if(pilha.size()>1){
                    pilha.push_back(pilha.front());
                    pilha.pop_front();
                } else if (pilha.size()==1){
                    remanescente=pilha.front();
                }
                i++;
            }

            cout << "Discarded cards: ";
            
            for (int aux=0; aux<(i-1); aux++){
                cout << descartadas[aux];
                if (aux!=(i-2)){
                    cout << ", ";
                }
            }
            
            cout << endl;
            cout << "Remaining card: " << remanescente << endl;
            n=1;

        } else {
            break;
        }

    }
    return 0;
}