#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101 
#define MAXN 101010
#define MAXL 23
#define endl '\n'

using namespace std;

bool eh_primo(int n){
    if (n <= 1){
        return false;
    } else if (n <= 3){
        return true;
    } else if ((n % 2 == 0) || (n % 3 == 0)){
        return false;
    }

    int i = 5;

    while (i * i <= n){
        if ((n % i == 0) || (n % (i + 2) == 0)){
            return false;
        }
        i += 6;
    }
    return true;
}

int count_primos(int x, int y){
    int count = 0;
    if (x>y){
        int aux = x;
        x = y;
        y = aux;
    }
    if (2 >= x){
        count += 1;
    }
    if (x%2==0){
        x+=1;
    }
    for (int i = x; i <= y; i+=2){
        if (eh_primo(i)==true){
            count++;
        }
    }
    return count;
}

__int128_t fatorial (int x) {
    __int128_t resp = 1;
    for (int i = 1; i <= x; i++){
        resp *= i;
    }
    return resp;
}

int main(){
    optimize;
    int A, B, fatores, primos = 0, auxiliar;
    __int128_t resposta;

    cin >> A >> B;

    if (A==B){
        cout << "?" << endl;
        return 0;
    } else {
        fatores = abs(A-B);
        primos = count_primos(A, B);
        auxiliar = primos + fatores - 1;
        resposta = (fatorial(auxiliar)) / (fatorial(fatores) * fatorial(auxiliar-fatores));
    }

    if (resposta%2 == 0){
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
  
    return 0;
}