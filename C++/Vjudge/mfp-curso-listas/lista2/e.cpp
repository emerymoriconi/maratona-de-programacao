#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> x;
        vector<int> v;
        for (int j=0; j<x; j++){
            cin >> y;
            v.push_back(y);
        }
        sort(v.begin(), v.end());
        int index_mediana;
        int tamanho = size(v);
        if (tamanho%2!=0){
            index_mediana = (tamanho + 1)/2 - 1;
        } else {
            index_mediana = tamanho/2 - 1;
        }
        int mediana = v[index_mediana];
        auto ub = upper_bound(v.begin(), v.end(), mediana);
        // quero descobrir o index do upper bound da mediana
        int index_up = distance(v.begin(), ub);
        int resp = index_up - index_mediana;
        cout << resp << endl;
    }

    return 0;
}