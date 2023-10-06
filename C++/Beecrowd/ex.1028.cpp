#include <bits/stdc++.h>

using namespace std;

int mdc(int n1, int n2){
    if (n1 % n2 == 0){
        return n2;
    } else {
        return mdc(n2, n1 % n2);
    }
}

int main(){
    vector<int> respostas;
    int N, n1, n2, resp;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> n1 >> n2;
        if(n1 >= n2){
            resp = mdc(n1, n2);
        } else {
            resp = mdc(n2, n1);
        }
        respostas.push_back(resp);
    }

    for (int r : respostas){
        cout << r << endl;
    }
   
    return 0;
}