#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 0, quantidade, codigo, unidades;
    double total = 0;

    cin >> quantidade;

    while (i < quantidade) {
        cin >> codigo >> unidades;

        if (codigo==1001){
            total = total + unidades*1.5;
        } else if (codigo==1002){
            total = total + unidades*2.5;
        } else if (codigo==1003){
            total = total + unidades*3.5;
        } else if (codigo==1004){
            total = total + unidades*4.5;
        } else if (codigo==1005){
            total = total + unidades*5.5;
        }

        i++;
    }

    cout << fixed << setprecision(2);

    cout << total << endl;

    return 0;
}