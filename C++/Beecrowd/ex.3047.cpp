#include <bits/stdc++.h>

using namespace std;

int main(){
    int mae, primeiro, segundo, terceiro;
    vector<int> filhos;

    cin >> mae >> primeiro >> segundo;

    terceiro = mae - (primeiro + segundo);

    filhos.push_back(primeiro);
    filhos.push_back(segundo);
    filhos.push_back(terceiro);

    sort(filhos.begin(), filhos.end());

    cout << filhos.back() << endl;
}