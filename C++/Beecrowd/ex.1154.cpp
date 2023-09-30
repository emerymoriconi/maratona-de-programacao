#include <bits/stdc++.h>

using namespace std;

int main(){
    //alocação dinâmica de vetores
    vector<int> numeros;
    int i = 1, sum = 0, entrada;
    
    cin >> entrada;

    numeros.push_back(entrada);

    sum = numeros.front();
    
    while (entrada > 0){
        cin >> entrada;
        if(entrada > 0){
            i++;
            numeros.push_back(entrada);
            sum+=numeros.back();
        }
    }

    cout << fixed << setprecision(2);

    cout << static_cast<double>(sum) / i << endl;

    return 0;
}