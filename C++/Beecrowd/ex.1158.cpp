#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, X, Y, soma, aux;
    vector<int> resp;

    cin >> N;

    for(int i = 0; i < N; i++){
        soma=0;
        cin >> X >> Y;
        if(X%2!=0){
             aux = 0;
        } else {
            aux = 1;
        }

        while(Y!=0){
            soma += X + aux;
            Y--;
            aux = aux + 2;
        }
        resp.push_back(soma);
    }

    for (int r : resp){
        cout << r << endl;
    }

    return 0;
}