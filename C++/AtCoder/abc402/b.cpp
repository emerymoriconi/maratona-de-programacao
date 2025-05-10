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
    int n; cin >> n;
    vector<int> resp;
    queue<int> q;

    for (int i = 0; i < n;  i++){
        int query; cin >> query;
        if (query == 1){
            int menu; cin >> menu;
            q.push(menu);
        } else if (query == 2){
            if (!(q.empty())){
                int b = q.front();
                q.pop();
                resp.push_back(b);
            }
        }
    }

    for (int i : resp){
        cout << i << endl;
    }

    return 0;
}