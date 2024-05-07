#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k;
    vector<int> numeros;

    cin >> t;

    for (int i=0; i<t; i++){
        cin >> n >> k;

        while (n>0){
            numeros.push_back(n);
            n--;
        }

        sort(numeros.begin(), numeros.begin()+k+1);

        for (int j : numeros){
            cout << j << " ";
        }

        numeros.erase(numeros.begin(), numeros.end());
    }

    return 0;
}