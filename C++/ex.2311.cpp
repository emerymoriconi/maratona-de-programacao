#include <bits/stdc++.h>

using namespace std;

int main(){
    int competidores, i=0, tamanho=7;
    string nome;
    double grau, notas[tamanho], menor_nota = 0.0, maior_nota = 0.0, nota_final = 0.0, soma = 0.0;

    cin >> competidores;

    double resultados[competidores];
    string nomes[competidores];

    while (i<competidores) {
        menor_nota = 0.0;
        maior_nota = 0.0;
        soma = 0.0;
        nota_final = 0.0;

        cin >> nome;
        cin >> grau;
        
        for (int j=0; j<tamanho; j++){
            cin >> notas[j];
        }

        for (int j=0; j<tamanho; j++){
            if (j==0){
                menor_nota = notas[j];
            }

            if (notas[j] < menor_nota){
                menor_nota = notas[j];
            }
        }

        for (int j=0; j<tamanho; j++){
            if (j==0){
                maior_nota = notas[j];
            }

            if (notas[j] > maior_nota){
                maior_nota = notas[j];
            }
        }

        for (int j=0; j<tamanho; j++){
            soma = soma + notas[j];
        }

        soma = soma - (menor_nota + maior_nota);
        nota_final = soma * grau;

        nomes[i] = nome;
        resultados[i] = nota_final;

        i++;
    }

    cout << fixed << setprecision(2);

    for (int i=0; i<competidores; i++){
        cout << nomes[i] << " " << resultados[i] << endl;
    }

    return 0;
}