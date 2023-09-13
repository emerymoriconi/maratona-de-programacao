#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor;
    int i = 0;

    cin >> valor;
    
    while (i<6){
        if(valor%2!=0){
            cout << valor << endl;
            i++;
        }
        valor++;
    }
    return 0;
}