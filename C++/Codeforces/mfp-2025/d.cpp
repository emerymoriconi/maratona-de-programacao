#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define ft first
#define sd second
#define PI 3.14159265359

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAXN = 1e5 + 10; // tam max pra vetores
const ll INF = 1e18; // valor muito grande (infinito)
const ll SMALL = -1e9; // valor muito pequeno
const int MOD = 1e9+7; // numero primo muito utilizado como modulo

int c1, l1, c2, l2, n, r1, r2, r3, q;

double solve(){
    double trechos, valor_linha;
    if (c1 == c2 && l1 == l2) return 0.0;
    
    trechos = min(abs(l2 - l1), n - abs(l2 - l1));
    
    double raio_1 = (c1 == 1) ? r1 : (c1 == 2) ? r2 : r3;
    double raio_2 = (c2 == 1) ? r1 : (c2 == 2) ? r2 : r3; 
        
    if (c1 == c2) {
        double direto =  trechos * ((2.0 * PI * raio_1)/n);
        // caminhos alternativos passando por outras circinf apenas pra 2 e 3, pois na 1 sempre vai ser melhor ir direto
        if (c1 == 2){
            double por_c1 = 2*(r2-r1) + ((trechos * 2.0 * PI * r1) / n);
            return min(direto, por_c1);
        } else if (c1 == 3){
            double por_c2 = 2*(r3-r2) + ((trechos * 2.0 * PI * r2) / n);
            double por_c1 = 2*(r3-r1) + ((trechos * 2.0 * PI * r1) / n);
            return min(direto, min(por_c2, por_c1));
        }
        return direto;
    }

    double direto = abs(raio_1 - raio_2) + (trechos * 2.0 * PI * min(raio_1, raio_2)) / n;    
    double por_c1 = abs(raio_1 - r1) + abs(raio_2 - r1) + (trechos * 2.0 * PI * r1) / n;
    double por_c2 = abs(raio_1 - r2) + abs(raio_2 - r2) + (trechos * 2.0 * PI * r2) / n;

    return min({direto, por_c1, por_c2});
}

int main(){
    optimize;
    cin >> r1 >> r2 >> r3 >> n >> q;
    vector<double> resp;

    for (int i = 0; i < q; i++){
        cin >> c1 >> l1 >> c2 >> l2;
        double r = solve();
        resp.push_back(r);
    }

    cout << fixed << setprecision(10);

    for (double r : resp){
        cout << r << endl;
    }

    return 0;
}