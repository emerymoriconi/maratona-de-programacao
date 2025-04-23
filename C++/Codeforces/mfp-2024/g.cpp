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
    vector<string> s;

    cin.ignore();

    for (int i = 0; i < n; i++){
        string a;
        getline(cin, a);
        s.push_back(a);
    }

    int time1 = 0, time2 = 0;
    for (int i = 0; i < n; i++){
        if (s[i][5] == '1'){
            time1 += s[i][8] - '0';
        } else if (s[i][5] == '2'){
            time2 += s[i][8] - '0';
        }
    }

    cout << time1 << " x " << time2 << endl;

    return 0;
}