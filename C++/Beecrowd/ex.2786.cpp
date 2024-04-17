#include <bits/stdc++.h>

using namespace std;

int main(){
    int L, C, tipo1, tipo2;

    cin >> L >> C;

    tipo2 = (2*L + 2*C) - 4;

    tipo1 = (L*C - (0.5 + tipo2*0.25))/0.5;

    cout << tipo1 << endl;
    cout << tipo2 <<endl;
}