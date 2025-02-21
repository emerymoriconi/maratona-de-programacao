#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

void hanoi(int n, int ori, int aux, int dest){
    // caso base (só tem um disco e movemos ele da origem pro destino)
    if (n == 1){
        cout << ori << " " << dest << endl;
        return;
    }

    // fazemos hanoi para N-1 discos usando a torre auxiliar como destino
    hanoi(n - 1, ori, dest, aux);
    // movemos o disco que sobrou na origem pro destino
    cout << ori << " " << dest << endl;
    // fazemos hanoi para os N-1 discos que estão na torre auxiliar agora tendo como destino a torre de destino definitivo e usando a torre de origem como auxiliar
    hanoi(n - 1, aux, ori, dest);
}

int main(){
    optimize;
    int n;

    cin >> n;

    cout << (1 << n) - 1 << endl;

    hanoi(n, 1, 2, 3);

    return 0;
}