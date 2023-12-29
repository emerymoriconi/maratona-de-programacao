#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101 
#define MAXN 101010
#define MAXL 23
#define endl '\n'

using namespace std;

int main(){
    optimize;
    int N, D, num;
    stack<char> pilha;
    vector<string> respostas;

    do {
        cin >> N >> D;
        if(N == 0 && D == 0) break;
        string numFinal = "";
        string numero;

        cin >> numero;

        for (char digito : numero){
            while (!pilha.empty() && D > 0 && pilha.top() < digito){
                pilha.pop();
                D--;
            }
            pilha.push(digito);
        }

        while (D > 0){
            pilha.pop();
            D--;
        }

        while (!pilha.empty()){
            numFinal = pilha.top() + numFinal;
            pilha.pop();
        }

        respostas.push_back(numFinal);
    
    } while (N != 0);

    for (string n : respostas){
        cout << n << endl;
    }
    
    return 0;
}