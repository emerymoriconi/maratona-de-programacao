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
    int n;
    
    cin >> n;
    vector<pair<ll, ll>> vec(n);
 
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        vec[i] = {b, a};
    }
 
    sort(vec.begin(), vec.end());
 
    int filmes = 1;
    int last = 0;
    
    for (int i = 1; i < n; i++){
        if (vec[i].second >= vec[last].first){
            filmes++;
            last = i;
        }
    }
 
    cout << filmes << endl;
 
    return 0;
}