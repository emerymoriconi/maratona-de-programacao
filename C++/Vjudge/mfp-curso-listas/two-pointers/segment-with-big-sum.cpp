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
    long long int s;
    vector<long long int> v;

    cin >> n >> s;

    for (int i = 0; i < n; i++){
        long long int aux;
        cin >> aux;
        v.push_back(aux);
    }

    int a = 0, b = 1, tamanho = 1;

    while (a < n && b < n){
        long long int sum = 0;
        int aux = a;
        while (aux <= b){
            sum += v[aux];
            aux++;
        }
        if (sum >= s) {
            tamanho = b - a + 1;
            a++;
        } else {
            b++;
        }
    }

    if (tamanho <= 0) {
        cout << "-1" << endl;
    } else {
        cout << tamanho << endl;
    }
 
    return 0;
}