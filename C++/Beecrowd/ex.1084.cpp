#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, D, num, j, index;
    vector<string> respostas;

    do {
        cin >> N >> D;
        if(N != 0){
            string array;

            //peguei o numero 
            cin >> array;

            int menor = array[0] - '0';
            index = 0;

            for (int i=0; i<D; i++){
                for (j=0; j<array.length(); j++){
                    int aux = array[j] - '0';
                    if (aux < menor){
                        menor = aux;
                        index = j;
                    }
                }
                array.erase(array.begin() + index);
                menor = array[0] - '0';
                index = 0;
            }
            
            respostas.push_back(array);
        }
    } while (N != 0);

    for (string r : respostas){
        cout << r << endl;
    }
    
    return 0;
}