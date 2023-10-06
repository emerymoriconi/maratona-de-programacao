#include <bits/stdc++.h>

using namespace std;

double gambler(int ev1, int ev2, int at){
    double dado;
    if (at == 3){
        //se ambos estiverem com a mesma probabilidade de ganhar
        return (double)ev1 / (double)(ev1 + ev2);
    } else {
        //fórmula se as probabilidades forem diferentes
        dado = 1.0 - (6 - at) / 6.0;
        dado = (1 - dado) / dado;
        return (1.0 - pow(dado, ev1)) / (1.0 - pow(dado, ev1 + ev2));
    }
}

int main(){
    int ev1, ev2, at, d, aux;
    double probabilidade;
    vector<double> respostas;

    while(true){
        cin >> ev1 >> ev2 >> at >> d;

        if (ev1 == 0 && ev2 == 0 && at == 0 && d == 0){
            break;
        }

        aux = ev1;
        ev1 = 0;

        //contabiliza quantas partidas são necessárias para o jogador 1 perder
        while(aux > 0){
            aux -= d;
            ev1++;
        }

        aux = ev2;
        ev2 = 0;

        //contabiliza quantas partidas são necessárias para o jogador 2 perder
        while(aux > 0){
            aux -= d;
            ev2++;
        }

        probabilidade = gambler(ev1, ev2, at);
        respostas.push_back(probabilidade);
    }

    cout << fixed << setprecision(1);

    for (double p : respostas){
        cout << p * 100 << endl;
    }
    
    return 0;
}