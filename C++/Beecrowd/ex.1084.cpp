#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, D, num, j, index;

    do {
        cin >> N >> D;
        if(N != 0){
            vector<int> array(N);
            int menor = 0;

            //peguei o numero 
            for (int i=0; i<N; i++){
                cin >> num;
                array.push_back(num);
            }

            for (int i=0; i<D; i++){
                for (j=0; j<N; j++){
                    if (array[j] < menor){
                        menor = array[j];
                        index = j;
                    }
                }
                array.erase(array.begin() + index);
            }
            while(!array.empty()){
                cout << array.front();
                array.erase(array.begin());
            }
            cout << endl;
        }
    } while (N != 0);
    
    return 0;
}