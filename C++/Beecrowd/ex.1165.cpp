#include <bits/stdc++.h>

using namespace std;

int main(){
   int N, X;

   cin >> N;

    for (int i=0; i<N; i++){
        int aux=1;
        cin >> X; 
        for(int c=2; c<X; c++){
            if (X%c==0){
                cout << X << " nao eh primo" << endl;
                aux = 0;
                break;
            }
        }
        if (aux == 1){
            cout << X << " eh primo" << endl;
        }
    }
    
    return 0;
}