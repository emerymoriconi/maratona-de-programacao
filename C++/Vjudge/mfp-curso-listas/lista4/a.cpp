#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

//Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate  a^n  using only  O(logn) multiplications (instead of  O(n) multiplications required by the naive approach).

// mod M é usado para não estourar os altos valores que podem resultar da exponenciação. O M sempre será um valor primo.

ll bin_exp(ll base, ll expoente, int M){
    if (expoente == 0) return 1;
    if (expoente == 1) return base%M;
    ll metade = (bin_exp(base, expoente/2, M)%M);
    if (expoente%2==0) return (metade * metade)%M;
    else return ((base)%M * metade * metade)%M;
}

int main(){
    optimize;
    ll base, expoente, R;
    int M;

    while (cin >> base >> expoente >> M){
        R = bin_exp(base, expoente, M);
        cout << R << endl;
    }

    return 0;
}