#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, menor=0, posicao=0;

    cin >> N;

    int vetor[N];

    for (int i=0; i<N; i++){
        cin >> vetor[i];
    }

    for (int i=0; i<N; i++){
        if (i==0){
            menor=vetor[i];
        }

        if(vetor[i]<menor){
            menor=vetor[i];
            posicao=i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}