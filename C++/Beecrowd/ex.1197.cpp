#include <bits/stdc++.h>

using namespace std;

int main(){
    int v, t, desloc;
    vector<int> respostas;

    while (cin >> v >> t){
        desloc = v * 2 * t;
        respostas.push_back(desloc);
    }

    for (int r : respostas){
        cout << r << endl;
    }

    return 0;
}