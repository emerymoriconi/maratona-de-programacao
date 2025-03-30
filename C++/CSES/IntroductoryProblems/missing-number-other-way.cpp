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
    
    cin >> n;
    vector<int> numb(n-1);
    
    for (int i = 0; i < n-1; i++){
        cin >> numb[i];
    }

    int prev = 0, missing;

    sort(numb.begin(), numb.end());

    for (int i = 0; i < n-1; i++){
        if (numb[i] == prev + 1){
            prev = numb[i];
        } else {
            break;
        }
    }
    
    missing = prev + 1;
    cout << missing << endl;

    return 0;
}