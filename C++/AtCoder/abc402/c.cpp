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

const int MAXN = 1e5 + 10; // tam max pra vetores
const ll INF = 1e18; // valor muito grande (infinito)
const ll SMALL = -1e9; // valor muito pequeno
const int MOD = 1e9+7; // numero primo muito utilizado como modulo

int main(){
    optimize;
    int n, m; cin >> n >> m;
    unordered_map<int, set<int>> un(MAXN);
    vector<int> resp;

    for (int i = 0; i < m; i++){
        int k; cin >> k;
        for (int j = 0; j < k; j++){
            int ing; cin >> ing;
            un[i].insert(ing);
        }
    }

    for (int i = 0; i < n; i++){
        int sup; cin >> sup;
        for (auto& prato : un){
            if (prato.second.find(sup) != prato.second.end()){
                prato.second.erase(sup);
            }
        }
        int pode_comer = 0;
        for (pair<int, set<int>> prato : un){
            if (prato.second.empty()){
                pode_comer++;
            }
        }
        resp.push_back(pode_comer);
    }

    for (int r : resp){
        cout << r << endl;
    }

    return 0;
}