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
    int n;
    ll soma = 0, soma_set = 0;
    vector<int> set_um, v;;
    
    cin >> n;

    for (int i = 1; i <= n; i++){
        soma += i;
        v.push_back(i);
    } 

    if (soma % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    } else {
        ll metade_soma = soma / 2;
        for (int i = n - 1; i >= 0; i--){
            if ((metade_soma < soma_set) && (metade_soma <= v[i])) {
                if (metade_soma != 0) set_um.push_back(metade_soma);
                break;
            }
            soma_set += v[i];
            set_um.push_back(v[i]);
            metade_soma -= v[i];
        }
    }

    cout << "YES" << endl;
    cout << set_um.size() << endl;

    for (int n : set_um){
        cout << n << " ";
    }

    cout << endl;
    cout << v.size() - set_um.size() << endl;

    sort(set_um.begin(), set_um.end());

    for (int n : v){
        auto elem = lower_bound(set_um.begin(), set_um.end(), n);
        if (*elem == n){
            continue;
        } else {
            cout << n << " ";
        }
    }

    return 0;
}