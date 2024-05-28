#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;

    int n;

    cin >> n;

    vector<string> v(n);
    vector<string> a(n);
    vector<string> resposta(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++) cin >> a[i];

    int j = 0;
    for (int i = 0; i < n; i++){
        resposta[i] = a[j];
        if (j < n && v[i] == a[j]){
            j++;
        }
    }

    for (int i = 0; i < n; i++){
        if (i == n - 1)
            cout << resposta[i] << endl;
        else
            cout << resposta[i] << " ";
    }
    
    return 0;
}