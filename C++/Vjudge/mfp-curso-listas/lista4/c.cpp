#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int mach, prod;
    vector<int> times;

    cin >> mach >> prod;

    for (int i = 0; i < mach; i++){
        int a;
        cin >> a;
        times.push_back(a);
    }

    ll l = 0, r = 1e18, resposta = -1;

    while (l <= r) {
        ll mid = l + (r - l)/2;
        ll soma = 0;
        for (ll x : times){
            soma += (mid / x);
            if (soma >= prod) break;
        }
        if (soma >= prod) {
            r = mid - 1;
            resposta = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << resposta << endl;

    return 0;
}