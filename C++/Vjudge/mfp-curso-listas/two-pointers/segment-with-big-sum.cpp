#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    long long int s;
    vector<int> v;

    cin >> n >> s;

    for (int i = 0; i < n; i++){
        int aux;
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