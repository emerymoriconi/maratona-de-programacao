#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y;
    map<int, int> mp;

    cin >> n >> x;

    for (int i=0; i<n; i++){
        cin >> y;
        if (mp.find(x - y) != mp.end()){
            cout << mp[x - y] + 1 << " " << i+1 << endl;
            return 0;
        }
        // guarda o par onde o valor no array é a chave, e o índice desse valor no vetor é o valor no map
        mp[y] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}