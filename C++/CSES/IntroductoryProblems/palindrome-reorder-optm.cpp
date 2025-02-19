#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

typedef long long ll;

const int MAXN = 1e5 + 10;
const ll INF = 1e18;
const ll SMALL = -1e9;

using namespace std;

int main(){
    optimize;
    string s;
    vector<int> freq(26, 0);

    cin >> s;

    vector<char> resp(s.size());
    int l = 0, r = s.size() - 1;

    // conta a frequência de cada letra com c - 'A'
    for (char c : s){
        freq[c - 'A']++;
    }

    int aux = 0;
    for (int i = 0; i < 26; i++){
        if (freq[i] % 2 != 0){
            aux++;
        }
    }

    if (aux > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    } else {
        for (int i = 0; i < 26; i++){
            // se a freq for ímpar, já coloca um caractere no meio e deixa aquela letra com freq par
            if (freq[i] % 2 != 0){
                // i + 'A' é para transformar o número i na letra do alfabeto correspondente
                resp[s.size()/2] = i + 'A';
                freq[i]--;
            }
            while (freq[i] > 0){
                resp[l] = i + 'A';
                resp[r] = i + 'A';
                l++;
                r--;
                freq[i] -= 2;
            }
        }
    }

    for (char c : resp){
        cout << c;
    }

    cout << endl;

    return 0;
}