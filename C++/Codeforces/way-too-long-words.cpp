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
    queue<string> ans;

    cin >> n;

    for (int i=0; i<n; i++){
        string palavras;
        cin >> palavras;
        if (palavras.size() > 10){
            char f = palavras.front();
            char l = palavras.back();
            int tam = palavras.size() - 2;
            palavras = f + to_string(tam) + l; 
        }
        ans.push(palavras);
    }

    while (!ans.empty()) {
        cout << ans.front() << endl;
        ans.pop();
    }

    return 0;
}