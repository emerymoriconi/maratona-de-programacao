#include <bits/stdc++.h>
#define MAXN 101010

using namespace std;
unsigned long long dp[MAXN];

unsigned long long fib(int N){
    if (N==0) return 0;

    if (N==1) return 1;

    if (dp[N]!=0) return dp[N];

    return dp[N] = fib(N-1) + fib(N-2);
}

int main(){
    int casos, entrada;

    cin >> casos;

    int entradas[casos];
    unsigned long long resultados[casos];

    for (int i=0; i<casos; i++){
        cin >> entrada; 

        entradas[i] = entrada;
        resultados[i] = fib(entrada);
    }

    for (int i=0; i<casos; i++){
        cout << "Fib(" << entradas[i] << ") = " << resultados[i] << endl;
    }
    
    return 0;
}