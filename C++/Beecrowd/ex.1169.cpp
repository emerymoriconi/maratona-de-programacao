#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, entrada;
    long long int X;
    vector<long long int> resp;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> entrada;

        X = ((pow(2, entrada) - 1) * 0.001) / 12;
        resp.push_back(X);
    }

    for (long long int r : resp){
        cout << r << " kg" << endl;
    }

    return 0;
}