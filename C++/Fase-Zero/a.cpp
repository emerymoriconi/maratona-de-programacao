#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;

using namespace std;

int main(){
    optimize;
    int a,b,c;
    cin >> a >> b >> c;
    set<int> todasCancoes = {1,2,3};
    set<int> cancoesOuvidas = {a,b,c};
    cancoesOuvidas.erase(0);
    for(int cancao : todasCancoes){
        if (cancoesOuvidas.find(cancao)==cancoesOuvidas.end()){
            cout<<cancao<<endl;
            break;
        }
    }
}