#include <bits/stdc++.h>

using namespace std;

long long int pow(int i){
    long long int res=1;
    for(int k=0; k<i; k++){
        res*=2;
    }
    return res;
}

int main(){
    long long int k;
    long long int N;
    
    cin >> N;
    
    if ((N & (N - 1)) == 0) { // verifica se N é uma potência de 2
        k = log2(N);
    } else {
        for (long long int i=0; i<N; i++){
            if (pow(i) > N){
                k = i - 1;
                break;
            }
        }
    }
    
    cout << k << endl;

    return 0;
}