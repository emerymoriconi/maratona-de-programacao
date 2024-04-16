#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, p, i = 0, j = 0, t;
    long long int tempoTotal = 0;
    vector<int> tempos;
    
    cin >> N >> p;

    while (i < N){
        cin >> t;
        tempos.push_back(t);
        i++;
    }

    sort(tempos.begin(), tempos.end());

    while (p > 0){
        tempoTotal += tempos[j];
        p--;
        j++;    
    }

    cout << tempoTotal << endl;
    
    return 0;
}