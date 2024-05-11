#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, c, m;

    cin >> t;

    for (int i=0; i<t; i++){
        cin >> a >> b >> c >> m;
        int maxM = (a-1) + (b-1) + (c-1);
        vector<int> numeros = {a, b, c};

        sort(numeros.begin(), numeros.end()); // O (nlogn)

        int minM = max((numeros[2] - (numeros[1] + numeros[0] + 1)), 0);

        if (m >= minM && m <= maxM){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}