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
    set<char> set;

    cin >> s;

    vector<char> resp(s.size());

    for (char c : s){
        set.insert(c);
    }

    map<char, int> quant;

    sort(s.begin(), s.end());

    quant[s[0]] = 1;

    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i-1]) quant[s[i]] += 1;
        else {
            quant[s[i]] = 1;
        }
    }

    int impar = 0;
    pair<char, int> posicao_impar;
    int r = s.size() - 1, l = 0;

    for (auto it = quant.begin(); it != quant.end(); it++){
        if ((it->second)%2 != 0) impar++;
    }

    if (impar > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    } else {
        // for itera, no pior caso, sobre as 26 letras do alfabeto
        for (auto it = quant.begin(); it != quant.end(); it++){
            if ((it->second)%2 == 0){
                while ((it->second) > 0){
                    resp[l] = it-> first;
                    resp[r] = it-> first;
                    l++;
                    r--;
                    it->second -= 2;
                }
            } else {
                posicao_impar = {it->first, it->second};
            }
        }
        while (((posicao_impar.second) > 0) && (l <= r)){
            resp[l] = posicao_impar.first;
            resp[r] = posicao_impar.first;
            if (l == r){
                posicao_impar.second -= 1;    
            } else {
                posicao_impar.second -= 2;
            }
            l++;
            r--;
        }
    }

    for (char c : resp) {
        cout << c;
    }

    cout << endl;

    return 0;
}