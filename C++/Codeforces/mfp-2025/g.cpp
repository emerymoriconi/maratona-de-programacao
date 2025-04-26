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
    string s;

    cin >> s;
    cin.ignore();

    vector<char> v, s1, s2;

    for (char c : s){
        v.push_back(c);
    }

    for (int i = 0; i < v.size(); i++){
        if (i%2==0) s1.push_back(v[i]);
        else s2.push_back(v[i]);
    }

    for (char a : s1){
        cout << a;
    }
     
    cout << endl;

    for (char a : s2){
        cout << a;
    }

    cout << endl;

    return 0;
}