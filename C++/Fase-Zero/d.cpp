#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;

    long long int E;
    int V;

    cin >> E >> V;

    long long tempo_inteiro = E / V;

    int minutos = ((E % V) * 60) / V;


    int hora = (19 + tempo_inteiro) % 24;
    
    if (minutos == 60) {
        minutos = 0;
        hora = (hora + 1) % 24;
    }

    cout << setw(2) << setfill('0') << hora << ":"
         << setw(2) << setfill('0') << minutos << endl;
    
    return 0;
}