#include <bits/stdc++.h>

using namespace std;

int main(){
    int C, N, nota, quant;
    double media, r;
    stack<int> notas;
    vector<double> respostas;

    cin >> C;

    for (int i=0; i<C; i++){
        quant = 0;
        media = 0.0;
        cin >> N;
        for (int j=0; j<N; j++){
            cin >> nota;
            notas.push(nota);
            media += nota;
        }
        media = media / N;
        while(!notas.empty()){
            if(notas.top() > media){
                quant++;
            }
            notas.pop();
        }
        r = (static_cast<double>(quant) / N) * 100;
        respostas.push_back(r);
    }

        cout << fixed << setprecision(3);
        for(double r : respostas){
            cout << r << "%" << endl;
        }

    return 0;
}