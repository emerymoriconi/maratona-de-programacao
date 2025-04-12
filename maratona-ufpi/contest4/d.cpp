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
    int n; 
    string s;
    vector<string> v;
    
    cin >> n;
    int resp = 0;
    cin.ignore();
    
    for (int i = 0; i < n; i++){
        getline(cin, s);
        resp++;
        for (auto c : v){
            if (s == c) {
                resp--;
                break;
            }
        }
        v.push_back(s);
    }

    cout << resp << endl;

    return 0;
}