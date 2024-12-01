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
    int N;
    pair<ll, ll> bean;
    vector<pair<ll, ll>> v;
    ll aux;
    vector<ll> resp;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> bean.second >> bean.first;
        v.push_back(bean);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++){
        if (i > 0){
            if (bean.first == v[i-1].first) { // comparando pra ver se sao da mesma cor
                aux = min(bean.second, v[i-1].second); 
            } else resp.push_back(aux);
        }
    }

    sort(resp.begin(), resp.end());

    cout << resp[size(resp) - 1] << endl;

    return 0;
}