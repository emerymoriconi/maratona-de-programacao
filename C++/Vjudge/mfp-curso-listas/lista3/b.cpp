#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> v;
    long long int menor = 1e18;
    long long int maior = -menor;

    cin >> n;

    long long int prefix[n+1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        prefix[i+1] = prefix[i] + x;
    }

    int index_maior, index_menor;

    for (int i = 1; i <= n; i++){
        if (prefix[i] > maior){
            maior = prefix[i];
            index_maior = i;
            
        }
        if (prefix[i] < menor){
            menor = prefix[i];
            index_menor = i;
        }
    }
    if (index_menor < index_maior){
        cout << maior - menor << endl;
    } else {
        cout << maior << endl;
    }

    return 0;
}