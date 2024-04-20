#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> codigo;
    int paridade, num, cont=0;

    for (int i = 0 ; i < 7; i++){
        cin >> num;
        codigo.push_back(num);
    }

    codigo.push_back(2);
    cin >> paridade;

    for (int x : codigo){
        if (x == 1){
            cont = count(codigo.begin(), codigo.end(), x);
            break;
        }
    }

    if ((paridade == 1) && (cont % 2 == 0)){
        cout << "S" << endl;
    } else if ((paridade == 1) && (cont % 2 != 0)){
        cout << "N?" << endl;
    } else if ((paridade == 0) && (cont % 2 != 0)){
        cout << "S" << endl;
    } else if ((paridade == 0) && (cont % 2 == 0)){
        cout << "N?" << endl;
    }

    return 0;
}