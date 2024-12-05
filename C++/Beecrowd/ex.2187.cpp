#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

int main(){
    optimize;
    int V = -1, z = 1;
    int cedulas[4] = {50, 10, 5, 1};
    

    while (V != 0) {
        int resp[4] = {0, 0, 0, 0};
        int sum = 0;

        cin >> V;

        if (V == 0) break;
        
        for (int i = 0; i < 4; i++){
            int j;
            for (j = 1; sum <= V; j++){
                sum += cedulas[i];
            }
            sum -= cedulas[i];
            resp[i] = j - 2;
        }
        cout << "Teste " << z << "\n";
        for (int i = 0; i < 4; i++){
            if (i == 3) {
                cout << resp[i] << "\n" << "\n";
                break;
            }
            cout << resp[i] << " ";
        }
        z++;
    }
    

    return 0;
}