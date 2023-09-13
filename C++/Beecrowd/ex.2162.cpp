#include <bits/stdc++.h>

using namespace std;

int main(){
    int entradas, i=0, valores, saida=1;

    cin >> entradas;

    int vetor[entradas];

    while (i<entradas){
        cin >> valores;
        vetor[i] = valores;
        i++;
    }

    i=0;

    while (i<entradas){
        if (entradas>2){
            if (i>=2){
                if (vetor[i]>vetor[i-1] && vetor[i-1]>vetor[i-2] || vetor[i]<vetor[i-1] && vetor[i-1]<vetor[i-2] || vetor[i]==vetor[i-1]){
                    saida = 0;
                } 
            }
        } else if (entradas==2){
            if (vetor[i]==vetor[i-1]){
                saida = 0;
            }
        } else if (entradas<2){
            saida = 0;
        }
        i++;
    }

    cout << saida << endl;

    return 0;
}