#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<long long int> v;
    long long int menor = 0;
    long long int maior = -1e18;

    cin >> n;

    long long int prefix[n+1];

    prefix[0] = 0;

    for (int i = 0; i < n; i++){
        long long int x;
        cin >> x;
        v.push_back(x);
        prefix[i+1] = prefix[i] + x;
    }

    for (int i = 1; i <= n; i++){
        maior = max(maior, prefix[i] - menor);
        menor = min(menor, prefix[i]);
    }
    
    cout << maior;

    return 0;
}