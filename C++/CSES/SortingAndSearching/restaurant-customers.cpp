#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ft first
#define sd second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;
const int MOD = 1e9+7;

int main(){
    optimize;
    int n, resp = 0, max_resp = 0;

    cin >> n;
    vector<ll> as(n);
    vector<ll> bs(n);

    for (int i = 0; i < n; i++){
        cin >> as[i];
        cin >> bs[i];
    }

    sort(as.begin(), as.end());
    sort(bs.begin(), bs.end());

    int chegada = 0, saida = 0;

    while (chegada < n && saida < n){
        if (as[chegada] < bs[saida]) {
            resp++;
            max_resp = max(resp, max_resp);
            chegada++;
        } else {
            saida++;
            resp--;
        }
    }

    cout << max_resp << endl;

    return 0;
}