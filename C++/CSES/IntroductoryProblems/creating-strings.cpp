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

// FUNÇÃO NEXT_PERMUTATION

int main(){
    optimize;
    string s;
    set<string> permutações;

    cin >> s;

    sort(s.begin(), s.end());
    
    permutações.insert(s);

    while (next_permutation(s.begin(), s.end()))
    {
        permutações.insert(s);
    }

    cout << permutações.size() << endl;

    for (string s : permutações){
        cout << s << endl;
    }

    return 0;
}