#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, dias;
    double C;
    vector<int> resp;

    cin >> N;

    for(int i=0; i<N; i++){
        dias = 0;
        cin >> C;
        while (C > 1.0){
            C = C/2;
            dias++;
        }
        resp.push_back(dias);
    }

    for (int r : resp){
        cout << r << " dias" << endl;
    }

    return 0;
}