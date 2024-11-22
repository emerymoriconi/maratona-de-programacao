#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

int main(){
    optimize;

    // KADANE'S ALGORITHM

    int n;
    vector<ll> array;
    ll sum = SMALL, best_sum = SMALL;

    cin >> n;

    for (int i = 0; i < n; i++){
        ll a;
        cin >> a;
        array.push_back(a);
    }

    for (ll a : array){
        // o que é mais vantajoso? começar a partir de 'a' ou somar com a sequência anterior?
        sum = max(a, sum + a);
        best_sum = max(best_sum, sum);
    }

    cout << best_sum << endl;

    return 0;
}