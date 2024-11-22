#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    ll n, num;

    cin >> n;

    ll soma_total = n * (n + 1) / 2;
    ll soma = 0;

    for (ll i = 1; i < n; i++){
        cin >> num;
        soma += num;
    }

    cout << soma_total - soma << endl;

    return 0;
}