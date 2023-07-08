#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i, j; 

    cin >> N;

    int matriz[N+1][N+1];

    for (i = 0; i<=N; i++) {
        for (j = 0; j<=N; j++){
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (matriz[i][j] + matriz[i][j+1] + matriz[i+1][j] + matriz[i+1][j+1] < 2) {
                cout << "U";
            } else {
                cout << "S";
            }
        }
        cout << "\n";
    }
    
    return 0;
}